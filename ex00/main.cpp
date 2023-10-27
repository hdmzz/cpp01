/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:59 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/27 10:42:05 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie*	zombie1 = newZombie("Zombie1");
	Zombie*	zombie2 = newZombie("Zombie2");
	
	zombie1->announce();
	zombie2->announce();
	randomChump("ZombieChump");
	randomChump("second ZombieChump");
	randomChump("third ZombieChump");

	delete zombie1;
	delete zombie2;
	return (0);
}
