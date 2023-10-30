/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:49:16 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 21:27:19 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*******************************************************************************
 * 								constructor/destructor
*******************************************************************************/
Zombie::Zombie( void )
{
	std::cout << "A zombie appeared!" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_getName()
			<< ": Uuuggghhhhuuhhh..... deaaad agaiiiiiin...."
			<< std::endl;
	return ;
}


/*******************************************************************************
 * 								member functions
*******************************************************************************/
void	Zombie::announce(void) const {
	std::cout << GREEN << this->_name << ": BraiiiiiiinnnzzzZ..." << CLOSE << std::endl;
}

int		Zombie::setName(std::string name) {
	this->_name = name;
	return (0);
}

std::string	Zombie::_getName() const
{
	return (this->_name);
}
