#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Constructor Intern" << std::endl;
}

Intern::~Intern() {
	std::cout << "Destructor Intern" << std::endl;
}

Intern::Intern(const Intern& instance) {
	std::cout << "Copy Constructor Intern" << std::endl;
	*this = instance;
}

Intern& Intern::operator=(const Intern& instance) {
	std::cout << "Copy Assignment operator Intern" << std::endl;
	return (*this);
}

//	Member function
Form* Intern::makeForm(const std::string name_form, const std::string name_target) {
	Form* ptr_to_form[] = {new ShrubberyCreationForm(name_target),
		new RobotomyRequestForm(name_target),
		new PresidentialPardonForm(name_target)};

	Form *form = NULL;
	std::string str[3] = {"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	int i;
	for (i = 0; i < 3 ; i++)
		if (name_form == str[i])
		{
			std::cout << "Intern creates " << name_form << std::endl;
			form = ptr_to_form[i];
			return (form);
		}
	std::cout << "Intern can't be create cuz the name of the form doesn't exist " << std::endl;
	return (form);
}


