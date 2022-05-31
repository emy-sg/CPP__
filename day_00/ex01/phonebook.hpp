# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>    // IO Manipulators: https://www.cplusplus.com/reference/iomanip/
						// (header providing parametric manipulators, like : setfill() and setw() and setprecision(), etc)
#include <string>    // std::getline() :  https://www.journaldev.com/39743/getline-in-c-plus-plus

#include "main.h"

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
		
		void	setFirst_name(std::string str);
		void	setLast_name(std::string str);
		void	setNickname(std::string str);
		void	setPhone_number(std::string str);
		void	setDarkest_secret(std::string str);

		std::string	getFirst_name();
		std::string	getLast_name();
		std::string	getNickname();
		std::string	getPhone_number();
		std::string	getDarkest_secret();	
};




class Phonebook{
	private:
		static int count;
		Contact contacts[8];

	public:
		Phonebook();
		~Phonebook();

		static int getCount();
		static void setCount();

		void add();
		void search();
};

//int	Phonebook::count = 0;        ==> error linker : duplicate symbol 'Phonebook::count' 

#endif
