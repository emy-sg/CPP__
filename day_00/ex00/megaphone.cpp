#include <iostream>
#include <cctype>      // toupper(), isalnum() ==> in C "ctype.h"

/*
   			https://www.geeksforgeeks.org/isalpha-isdigit-functions-c-example/

	int isalpha(int c); // tests if it's a character, it can be "isupper()" or "islower()"
	==> The "isalpha()" function returns zero if the character tests false 
   			and returns non-zero if the character tests true.

	int	isdigit(int c); && int isnumber(int c);
	==> The "isdigit()" and "isnumber()" functions return zero if the character tests false 
			and return non-zero if the character tests true.

	int isalnum(int c);  // tests for any character for which "isalpha()" or "isdigit()" is true.
	==> The "isalnum()" function returns zero if the character tests false 
			and returns non-zero if the character tests true.

	int toupper(int c); // function converts a "lower-case" letter to the corresponding "upper-case" letter.
					"The argument "c" must be representable as an "unsigned char " or "the value of EOF.
	==> If the argument is a "lower-case" letter, the "toupper()" function returns the corresponding "upper-case" letter if there is one,
			otherwise, the argument is returned unchanged.

	int	tolower(int c); // function converts a "upper-case" letter to the corresponding "lower-case" letter.
					"The argument "c" must be representable as an "unsigned char " or "the value of EOF.
	==> If the argument is an upper-case letter, the "tolower()" function returns the corresponding "lower-case" letter if there is one,
			otherwise, the argument is returned unchanged.

*/

std::string	megaphone(char *string)
{
	std::string str = string;

	int	i = 0;
	int length_of_str = str.length();

	while (i < length_of_str)
	{
		str[i] = toupper(string[i]);
		i++;
	}
	return (str);
}	

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		while (++i < argc)
			std::cout << megaphone(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
