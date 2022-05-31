#include <iostream>
#include <fstream>

// Checking for an empty file in C++:    (using seekg and tellg)
//					https://stackoverflow.com/questions/2390912/checking-for-an-empty-file-in-c#:~:text=The%20above%20code%20works%20in,has%20nothing%20to%20peek%20at.

// std::string::find
// 					https://www.cplusplus.com/reference/string/string/find/

// std::string::substr
// 					https://www.cplusplus.com/reference/string/string/substr/

//void	replace_fct(std::ifstream infile, std::ofstream outfile, char *arg2, char *arg3)
//{

//}

int main(int argc, char **argv, char **arge)
{
	if (argc == 4)
	{
		std::ifstream infile;
		infile.open(argv[1], std::ifstream::in);
		if (infile.is_open())
		{
			infile.seekg(0, std::ifstream::end);  
			if (infile.tellg() == 0) {
				std::cout << "ERROR empty file: " << argv[1] << std::endl;
			}
			else
			{
				infile.seekg(0, std::ifstream::beg);
				std::string name_file = argv[1];  //file.replace
				std::ofstream outfile;
				outfile.open(name_file.append(".replace"), std::ofstream::out | std::ofstream::trunc);
				if (outfile.is_open())
				{


					std::string str;
					std::string str1 = argv[2];
					std::string str2 = argv[3];
	
					// std::string::find : the position of the first character of the first match
					// If no matches were found, the function returns "string::npos"
					while (getline(infile, str))
					{
							std::string new_str;
							size_t beg = 0;
							size_t pos = str.find(str1); 		//6
							while (pos != std::string::npos)
							{
									new_str.append(str.substr(beg, (pos- beg)));
									new_str.append(str2);
									beg = pos + str1.length();
									pos = str.find(str1, pos+1);
							}
							if (beg < str.length())
							{
								new_str.append(str.substr(beg, (str.length()- beg)));
							}
							outfile << new_str;
							if (!infile.eof()) 
								outfile << std::endl;
					}
					infile.close();
					outfile.close();
				}
				else
					std::cout << "ERROR creating a file: " << std::endl;
			}
		}
		else
			std::cout << "ERROR opening file: " << argv[1] << std::endl;
	}
	else
	{
		std::cout << "Your program must take three parameters in the following order:" << std::endl;
		std::cout << "\tfilename and two strings s1 and s2" << std::endl;
	}
	return (0);
}
