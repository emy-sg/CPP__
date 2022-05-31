#include "Bureaucrat.hpp"

int main() {
	/*Bureaucrat emy("emy", 3), hss("hss", 33);

	// test Copy assignment operator
	hss = emy;
	std::cout << emy.getName() << " " << emy.getGrade() << std::endl;
	std::cout << hss.getName() << " " << hss.getGrade() << std::endl;

	// test Copy constructor
	Bureaucrat mew(emy);
	std::cout << mew.getName() << " " << mew.getGrade() << std::endl;
	*/

	//	---------------------------------------------------
	
		/*try {
			Bureaucrat emy("hss", 0);
			std::cout << emy;
		}
		catch (std::exception& e) {
			std::cout << e.what();		
		}
		*/

	//	--------------------------------------------------

		/*try {
			Bureaucrat hss("hss", 150);
			std::cout << hss;
		}
		catch (std::exception& e) {
			std::cout << e.what();		
		}
		*/

	//	--------------------------------------------------

	try {
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
	

}
