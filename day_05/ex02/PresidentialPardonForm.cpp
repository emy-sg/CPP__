#include "PresidentialPardonForm.hpp"

// Orthodox Canonical form:

/*PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "Default Constructor PresidentialPardonForm" << std::endl;
}*/

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form("PresidentialPardonForm", 25, 5) {
	std::cout << "Parameterized Constructor PresidentialPardonForm" << std::endl;
	target = str;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& instance) :  Form(instance.getName(), instance.getGradetoSign(), instance.getGradetoExecute()) {
	std::cout << "Copy Constructor PresidentialPardonForm" << std::endl;
	*this = instance;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& instance) {
	std::cout << "Copy Assignment operator PresidentialPardonForm" << std::endl;
	target = instance.target;
	return (*this);
}

//		--------------------------------------------------

// Getter

std::string	PresidentialPardonForm::getTarget() const {
	return target;
}

//		-------------------------------------------------

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getSign() == false)
		throw FormSigned();
	if (executor.getGrade() > getGradetoExecute())
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << "Presidential target " << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}