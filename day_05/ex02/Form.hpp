# ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


// Why we need to declare class, isn't including the header file of Bureaucrat is enough:
// Ressource:		
// 				https://www.cplusplus.com/forum/beginner/267114/

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool  sign;
		const int grade_to_sign;
		const int grade_to_execute;


	public:
		// Orthodox Canonical form
		Form();								// default constructor 
		Form(const std::string, int, int);
		~Form();
		Form(const Form&);
		Form& operator=(const Form&);

		
		// Nested class Exception

			class FormSigned : public std::exception {
				virtual const char* what() const throw();
			};

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


		// new member function
	
		virtual void execute(Bureaucrat const & executor) const = 0;
		// Declare a pure virtual function to create Abstract class
};

std::ostream& operator<<(std::ostream &out, const Form& instance); 

#endif
