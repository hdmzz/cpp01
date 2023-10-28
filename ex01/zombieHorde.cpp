/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:49:02 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 14:11:28 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
/*******************************************************************************
 * 								zombie horde
*******************************************************************************/

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie* zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}

	return (zombieHorde);
}
