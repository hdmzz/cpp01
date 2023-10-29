/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:08:16 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 23:42:59 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*******************************************************************************
 * 									Constructor/Destructor
*******************************************************************************/
Weapon::Weapon(std::string const type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

/*******************************************************************************
 * 									Member function
*******************************************************************************/
std::string const&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return ;
}
