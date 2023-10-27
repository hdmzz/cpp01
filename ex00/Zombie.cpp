/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:54 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/27 10:12:29 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/******************************************************************************/
/*						CONSTRUCTORS & DESTRUCTORS							  */
/******************************************************************************/

Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string name) : _name(name) {
	return;
}

Zombie::~Zombie(void) {
	return;
}

/******************************************************************************/
/*								MEMBER FUNCTION								  */
/******************************************************************************/
void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int		Zombie::setName(std::string name) {
	this->_name = name;
	return (1);
}
