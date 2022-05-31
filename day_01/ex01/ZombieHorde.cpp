#include "Zombie.hpp"

// Zombies = new Zombie(name);

Zombie *zombieHorde(int N, std::string name){
	Zombie *Zombies;
	
	int	i = 0;
	
	Zombies= new Zombie[N];

	while (i < N){
		Zombies[i].set_name(name);
		i++;
	}
	return (Zombies);
}
