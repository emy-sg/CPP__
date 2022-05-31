# ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string	target;

	public:
		// Orthodox Canonical form
		RobotomyRequestForm();
	   ~RobotomyRequestForm();
   		RobotomyRequestForm(const std::string target);

		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		
		// getter
		std::string getTarget() const;
		
		// member function
		void	execute(Bureaucrat const & executor) const ;		
};

#endif
