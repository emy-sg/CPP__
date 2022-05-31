#include "Form.hpp"

// Orthodox Canonical form:

/*Form::Form() {
	std::cout << "Default Constructor Form" << std::endl;
}*/

Form::~Form() {
	std::cout << "Destructor Form" << std::endl;
}

Form::Form(const std::string str, int i, int j) : name(str), grade_to_sign(i), grade_to_execute(j) {
	std::cout << "Parameterized Constructor Form" << std::endl;
	// name = str;  error compilation cuz name is const and should be initialized
	
	// any attempt to instantiate a Form using an invalid grade must throw an exception
	
	sign = false;

	if (grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_sign > 150)
		throw GradeTooLowException();
	
	if (grade_to_execute < 1)
		throw GradeTooHighException();
	if (grade_to_execute > 150)
		throw GradeTooLowException();
		
}

Form::Form(const Form& instance) : name(instance.name), grade_to_sign(instance.grade_to_sign), grade_to_execute(instance.grade_to_execute) {
	std::cout << "Copy Constructor Form" << std::endl;
	*this = instance;
}

Form& Form::operator=(const Form& instance) {
	std::cout << "Copy Assignment operator Form" << std::endl;
	sign = instance.sign;
	return (*this);
}

//  ----------------------------------------------------------------

//	Getters:

std::string Form::getName() const {
	return (name);
}

bool	Form::getSign() const {
	return (sign);
}

int	Form::getGradetoSign() const {
	return (grade_to_sign);
}

int	Form::getGradetoExecute() const {
	return (grade_to_execute);
}

//		-------------------------------------------------------

// The insertion («) operator to print :
// 	   <name>, Form grade <grade>.

std::ostream& operator<<(std::ostream &out, const Form& instance) {
	out << instance.getName() << " form, ";

	if (instance.getSign())
		out << "is signed. "; 
	else
		out << "is waiting to be signed. ";
	
		
	std::cout << "It required "<< instance.getGradetoSign() << " grade to be signed, and " << instance.getGradetoExecute() << " grade to be executed." << std::endl;
	return out;
}

//		--------------------------------------------------------

// Exception

const char* Form::FormSigned::what() const throw() {
	return "Form not signed yet\n";
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade Form Too High\n";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade Form Too Low\n";
}

// 		------------------------------------------------------

void	Form::beSigned(const Bureaucrat& employe)
{
	if (sign != true)
	{
		if (grade_to_sign >= employe.getGrade())
			sign = true;
		else
			throw GradeTooLowException();
	}
}

