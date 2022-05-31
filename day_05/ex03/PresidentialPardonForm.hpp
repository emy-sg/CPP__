# ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	target;

	public:
		// Orthodox Canonical form
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);

		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);

		// getter
		std::string getTarget() const;

		// member function
		void	execute(Bureaucrat const & executor) const;
};

#endif
