#include "Bureaucrat.hpp"
#include "Form.hpp"
/*
	// test Copy assignment operator
	hss = mo =emy;
	std::cout << hss.getName() << " " << hss.getGrade() << std::endl;
	std::cout << hss.getName() << " " << hss.getGrade() << std::endl;

	// test Copy constructor
	Bureaucrat mew(emy);
	std::cout << mew.getName() << " " << mew.getGrade() << std::endl;
	*/

//	---------------------------------------------

/*	try {
		Bureaucrat emy("hss", 2);
		std::cout << emy;

		emy.increment_grade();
		std::cout << emy;

		emy.increment_grade();
		std::cout << emy;

		emy.increment_grade();
		std::cout << emy;

		emy.increment_grade();
		std::cout << emy;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
*/

int main()
{
	
//	------------------------------------------

	/*try {
		Bureaucrat emy1("emy", 160);
		Form form("chahada madrasia", 50, 4);
		std::cout << form;

		form.beSigned(emy1);
		std::cout << form;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}*/

	//	-------------------------------------------

	/*try {	
		Bureaucrat emy2("emy", 0);
		Form form("chahada madrasia", 0, 4);
		std::cout << form;

		form.beSigned(emy2);
		std::cout << form;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}*/

	//	--------------------------------------------
	
	try {
		Bureaucrat emy("emy", 3);

		Form form("chahada madrasia", 4, 4);
		std::cout << form << std::endl;

	//	-----------------------------------

		form.beSigned(emy);
		emy.signForm(form);
		std::cout << form << std::endl;

	//	-----------------------------------

		form.beSigned(emy);
		emy.signForm(form);
		std::cout << form << std::endl;


	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
//		-----------------------------------------

	try {
		Bureaucrat hss("hss", 5);

		Form form("chahada madrasia", 4, 4);
		std::cout << form << std::endl;

	//	-----------------------------------

		form.beSigned(hss);
		hss.signForm(form);
		std::cout << form << std::endl;

	//	-----------------------------------

		form.beSigned(hss);
		hss.signForm(form);
		std::cout << form;


	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}
