#include "RobotomyRequestForm.hpp"

// Orthodox Canonical form:

/*RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "Default Constructor RobotomyRequestForm" << std::endl;
}*/

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string str) : Form("RobotomyRequestForm", 72, 45) {
	std::cout << "Parameterized Constructor RobotomyRequestForm" << std::endl;
	target = str;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& instance) :  Form(instance.getName(), instance.getGradetoSign(), instance.getGradetoExecute()) {
	std::cout << "Copy Constructor RobotomyRequestForm" << std::endl;
	*this = instance;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& instance) {
	std::cout << "Copy Assignment operator RobotomyRequestForm" << std::endl;
	target = instance.getTarget();
	return (*this);
}
//		--------------------------------------------------

// Getter

std::string	RobotomyRequestForm::getTarget() const {
	return target;
}

//		--------------------------------------------------

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int i;

	i++;
	if (getSign() == false)
		throw FormSigned();
	if (executor.getGrade() > getGradetoExecute())
		throw Bureaucrat::GradeTooLowException();
	if (i%2)
		std::cout << "Robotomy target: " << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy target: " << target << "failed." << std::endl;
}

