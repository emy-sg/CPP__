# ifndef SHRUBBERYCREATIONFORM_HPP
#define  SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	private:
		std::string	target;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);

		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

		// getter
		std::string getTarget() const;

		// member function
		void	execute(Bureaucrat const & executor) const;
};

#endif
