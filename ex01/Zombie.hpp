/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:49:10 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 14:16:26 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# define GREEN "\033[32m"
# define CLOSE "\033[0m"

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	~Zombie(void);

	int		setName(std::string name);
	void	announce(void) const;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
