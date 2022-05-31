#include "ShrubberyCreationForm.hpp"

// Orthodox Canonical form:

/*ShrubberyCreationForm::ShrubberyCreationForm() {
	std::cout << "Default Constructor ShrubberyCreationForm" << std::endl;
}*/

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string str) : Form("ShrubberyCreation", 145, 137) {
	std::cout << "Parameterized Constructor ShrubberyCreationForm" << std::endl;
	target = str;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance) : Form(instance.getName(), instance.getGradetoSign(), instance.getGradetoExecute()) {
	std::cout << "Copy Constructor ShrubberyCreationForm" << std::endl;
	*this = instance;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& instance) {
	std::cout << "Copy Assignment operator ShrubberyCreationForm" << std::endl;
	target = instance.target;
	return (*this);
}

//		--------------------------------------------------

// Getter

std::string	ShrubberyCreationForm::getTarget() const {
	return target;
}

//		-----------------------------------------------

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (getSign() == false)
		throw FormSigned();
	if (executor.getGrade() > getGradetoExecute())
		throw Bureaucrat::GradeTooLowException();
	std::string str = getTarget();
	std::ofstream outfile;
	outfile.open(str.append("_shrubbery"), std::ofstream::out | std::ofstream::trunc);
	if (outfile.is_open())
	{
		outfile << "	ccee88oo\n";
		outfile << "  C8O8O8Q8PoOb o8oo\n";
		outfile << " dOB69QO8PdUOpugoO9bD\n";
		outfile << "CgggbU8OU qOp qOdoUOdcb\n";
		outfile << "    6OuU  /p u gcoUodpP\n";
      	outfile << "	\\\\///  /douUP\n";
        outfile << "	  \\\\///\n";
        outfile << " 	   |||///\n";
        outfile << " 	   |||||\n";
        outfile << " 	   |||||\n";
   		outfile << "   ....//||||\\....\n";
		outfile.close();
	}
	else
		std::cout << "ERROR creating a file: " << std::endl;
}
