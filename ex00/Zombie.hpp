/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:57 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 20:51:39 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
	std::string	_getName() const;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void);
	int			setName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
