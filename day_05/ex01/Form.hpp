# ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


// 
class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool  sign;
		const int grade_to_sign;
		const int grade_to_execute;

		Form();		// default constructor declared as private

	public:
		// Orthodox Canonical form
		Form(const std::string, int, int);
		~Form();
		Form(const Form&);
		Form& operator=(const Form&);

		
		// Nested class Exception

			class GradeTooHighException : public std::exception {
				virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception {
				virtual const char* what() const throw();
			};

		// getters
		std::string getName() const;
		bool getSign() const;
		int getGradetoSign() const;
		int getGradetoExecute() const;

		// member function
		// It changes the form status to "signed" if the bureaucrat's grade is high enough
		void beSigned(const Bureaucrat&);
};

std::ostream& operator<<(std::ostream &out, const Form& instance); 

#endif
