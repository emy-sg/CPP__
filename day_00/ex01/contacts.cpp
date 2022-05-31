#include "phonebook.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::setFirst_name(std::string str) {
	first_name = str;
}

void	Contact::setLast_name(std::string str) {
	last_name = str;
}

void	Contact::setNickname(std::string str) {
	nickname = str;
}

void	Contact::setPhone_number(std::string str) {
	phone_number = str;
}

void	Contact::setDarkest_secret(std::string str) {
	darkest_secret = str;
}

std::string	Contact::getFirst_name() {
	return (first_name);
}

std::string	Contact::getLast_name() {
	return (last_name);
}

std::string	Contact::getNickname() {
	return (nickname);
}

std::string	Contact::getPhone_number() {
	return (phone_number);
}

std::string	Contact::getDarkest_secret() {
	return (darkest_secret);
}
