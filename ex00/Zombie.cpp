/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:54 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 21:27:33 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/******************************************************************************/
/*						CONSTRUCTORS & DESTRUCTORS							  */
/******************************************************************************/

Zombie::Zombie( void )
{
	std::cout << "A zombie appeared!" << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name( name )
{
	std::cout << "A zombie named " << this->_getName() << " appeared!" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_getName()
			<< ": Uuuggghhhhuuhhh...... deaaad agaiiiiiin...."
			<< std::endl;
	return ;
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

std::string	Zombie::_getName() const
{
	return (this->_name);
}
