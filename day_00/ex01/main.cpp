#include "main.h"

// No dynamic allocation && can't store more than 8 contacts.
// ==> If a ninth contact is added, replace the oldest contact.
// ADD command, SEARCH command, EXIT command.

void display(std::string name){
	if (name.length() > 10)
	{
		std::string str = name.substr(0, 9);
		std::cout << std::left << std::setw(9) << str << '.' << "|";
	}
	else
		std::cout << std::left << std::setw(10) << name << "|";

}

//int Phonebook::count = 0;			==> No error linking, work just fine

int main()
{
	Phonebook phonebook;

	while (1)
	{
		std::string command;

		std::getline(std::cin, command);
		if (command.compare("EXIT") == 0)
			return (0);
		else if (command.compare("SEARCH") == 0)
			phonebook.search();
		else if (command.compare("ADD") == 0)
		{
			phonebook.add();
			Phonebook::setCount();
		}
		else
		{
			std::cout << "ERROR ARGUMENT" << std::endl;
			return (1);
		}
	}
	return (0);
}
