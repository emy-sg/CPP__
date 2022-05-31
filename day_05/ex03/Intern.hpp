# ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Form;

class Intern {
	public:
		// Orthodox Canonical form
		Intern();
		~Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);

		// member fct
		Form* makeForm(const std::string, const std::string);
};

typedef Form*	(Intern::*ptr_to_form) (std::string);

#endif