/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:07:01 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/29 03:18:04 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _bWeapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	if (weapon.getType().empty())//si le weapon passé en argument est vide
		return ;
	else if (this->_bWeapon && !(this->_bWeapon->getType().empty()))
	{
		std::cout << this->_name << " drops " << this->_bWeapon->getType() << std::endl;
	}
	std::cout << this->_name << " take a " << weapon.getType() << std::endl;
	this->_bWeapon = &weapon;
}
void	HumanB::attack()
{
	if (this->_bWeapon != NULL && this->_bWeapon->getType() != "")
		std::cout << this->_name << " attacks with a " << this->_bWeapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks without weapon" << std::endl;
}
