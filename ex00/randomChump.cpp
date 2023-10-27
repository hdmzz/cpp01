/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:10:02 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/27 10:27:28 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Random chump does not allocate anything just call the constructor
//announce, and the destructor is called at the end of the programm
void	randomChump(std::string name) {
	Zombie	zombieChump = Zombie(name);

	zombieChump.announce();
	return ;
}
