#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Intern emy;

	emy.makeForm("ShrubberyCreationForm", "woow");
	emy.makeForm("Sdfsj", "woow");

	{
Intern someRandomIntern;
Form* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
}
