/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:00:01 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 19:01:31 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
/*******************************************************************************
 * 							Constructor/Destructo
*******************************************************************************/

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

/*******************************************************************************
 * 							Member functions private
*******************************************************************************/
void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*******************************************************************************
 * 							Member functions public
*******************************************************************************/

int	getLevel(std::string const level)
{
	std::string const	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					levelNumber = 4;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			levelNumber = i;
	}
	return (levelNumber);
}

void	Harl::complain( std::string level )
{
	fptr	complaints[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		nLevel = getLevel(level);

	if (nLevel < 4)
		(this->*complaints[nLevel])();
	else
		std::cout << "Only DEBUG, INFO, WARNING and ERROR level accepted" << std::endl;
	return ;
}
