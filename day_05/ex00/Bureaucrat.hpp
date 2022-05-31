# ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const std::string name;
		int grade;			// 1(Highest) to 150(Lowest)
		Bureaucrat();		// default constructor declared private

	public:
		//Othodox Canonical form
		Bureaucrat(const std::string, int);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat&);  // But why pass argument as const ?

		/* Why copy constructor argument should be const in C++?
		
			When we create our own "copy constructor", we pass an object by reference
				and we generally pass it as a "const reference".
			
			One reason for passing "const reference" is we should use "const in C++",
				wherever possible so that objects are not accidentally modified.

			==> This is one good reason for "passing reference as const", but there is more to it.

		*/
		
		Bureaucrat& operator=(const Bureaucrat&);   // why return reference to class ? 


			// member function
			std::string getName() const;
			int getGrade() const;
			void increment_grade();
			void decrement_grade();

			// Nested class Exception

			class GradeTooHighException : public std::exception {
				virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception {
				virtual const char* what() const throw();
			};

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& instance);

#endif 
