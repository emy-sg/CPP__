#include "Bureaucrat.hpp"

// Orthodox Canonical form:

/*Bureaucrat::Bureaucrat() {
	std::cout << "Default Constructor Bureaucrat" << std::endl;
}
*/

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str, int i) : name(str) {
	std::cout << "Parameterized Constructor Bureaucrat" << std::endl;
	// name = str;  error compilation cuz name is const and should be initialized
	
	// any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception
	
	grade = i;
	
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& instance) : name(instance.name) {
	std::cout << "Copy Constructor Bureaucrat" << std::endl;
	*this = instance;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& instance) {
	std::cout << "Copy Assignment operator Bureaucrat" << std::endl;
	grade = instance.grade;
	return (*this);
}

//  ----------------------------------------------------------------

//	Getters:

std::string Bureaucrat::getName() const {
	return (name);
}

int	Bureaucrat::getGrade() const {
	return (grade);
}

//	-----------------------------------------------------------------

// member function

void Bureaucrat::increment_grade() {
	// Since grade: "1" is the "Highest one",
	//	==> so incrementing a grade 3 should give a grade 2.

	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement_grade() {
	// Since grade: "150" is the "Lowest one",
	//  ==> so decrementing a grade 149 should give a grade 150.

	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

//   ----------------------------------------------------------------

// The insertion («) operator to print :
// 	   <name>, bureaucrat grade <grade>.

std::ostream& operator<<(std::ostream &out, const Bureaucrat& instance) {
	out << instance.getName() << ", bureaucrat grade " << instance.getGrade() << "." << std::endl;
	return out;
}

//	------------------------------------------------------------------

// Exception

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Too Low\n";
}
