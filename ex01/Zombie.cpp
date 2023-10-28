/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:49:16 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 14:35:39 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*******************************************************************************
 * 								constructor/destructor
*******************************************************************************/
Zombie::Zombie(void) {
	std::cout << this->_name << GREEN << " : Aaaaaaargh" << CLOSE << std::endl;

	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << GREEN << " : return to the grave" << CLOSE << std::endl;

	return ;
}


/*******************************************************************************
 * 								member functions
*******************************************************************************/
void	Zombie::announce(void) const {
	std::cout << this->_name << GREEN << ": BraiiiiiiinnnzzzZ..." << CLOSE << std::endl;
}

int		Zombie::setName(std::string name) {
	this->_name = name;
	return (0);
}
