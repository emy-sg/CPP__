#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	// Form emy("emy", 1, 1);   // error compilation "Form" is an abstract class

/*	try {
		Bureaucrat emy("emy", 5);
		Bureaucrat hss("hss", 150);
		ShrubberyCreationForm shr("TREE");
		//shr.beSigned(emy);
		emy.signForm(shr);

		// Let's check the execution
		shr.execute(emy);
		shr.execute(hss);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
*/

//		------------------------------------------

/*	try {
		Bureaucrat emy("emy", 5);
		Bureaucrat hss("hss", 150);
		RobotomyRequestForm shr("TREE");
		shr.beSigned(emy);
		emy.signForm(shr);

		// Let's check the execution
		shr.execute(emy);
		shr.execute(hss);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
*/

//		--------------------------------------------

	try {
		Bureaucrat emy("emy", 5);
		Bureaucrat hss("hss", 150);
		PresidentialPardonForm shr("TREE");
		shr.beSigned(emy);
		emy.signForm(shr);

		// Let's check the execution
		//emy.executeForm(shr);
		hss.executeForm(shr);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
