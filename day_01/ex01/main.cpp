#include "Zombie.hpp"

int main(){
	Zombie *zombies;
	int 	n = 5;
	
	zombies = zombieHorde(n, "DRAGON");
	int 	i = 0;
	while (i < n)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}
