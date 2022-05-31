#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::Zombie(std::string name) : name(name) {
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << name << " is being deleted" << std::endl;
}

void	Zombie::set_name(std::string name){
	this->name = name; 
}

std::string	Zombie::get_name(void){
	return (this->name);
}

void	Zombie::announce(void){
	std::cout << this->name << " " <<"BraiiiiiiinnnzzzZ..." << std::endl;
}

