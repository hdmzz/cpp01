/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:49:22 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 14:37:54 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#define LIMIT_MAX 50000
#define LIMIT_MIN -50000

int	getZomNb(void) {
	int	nb;

	std::cout << "How many Zombies do you want ?" << std::endl << "> ";
	while (!(std::cin >> nb) || nb > LIMIT_MAX || nb < LIMIT_MIN) {
		if (std::cin.eof())
			return (0);
		std::cout << "Please be reasonable enter a number between " << LIMIT_MIN << " and " << LIMIT_MAX << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (nb);
}

std::string	getName(void) {
	std::string	name;

	std::cin.ignore();//nécessaire car la precedente entrée est toujout=rs presente dans le cin
	std::cout << "What's the name of the horde ?" << std::endl << "> ";
	std::getline(std::cin, name);//get line pour lire une ligne entirement et pas seulement un seul mot par un seuil mot
	if (std::cin.eof())
		return (std::string());
	return (name);
}

int	main(void) {
	int			nb;
	std::string	name;

	nb = getZomNb();
	name = getName();

	std::cout << GREEN << "We create the horde !!!" << CLOSE << std::endl;

	Zombie	*zHorde = zombieHorde(nb, name);
	if (zHorde == NULL) {
		std::cout << GREEN << "Allocation failed !!" << CLOSE << std::endl;
		return (1);
	}

	for (int i = 0; i < nb; i++)
		zHorde[i].announce();

	delete [] zHorde;
	return (0);
}
