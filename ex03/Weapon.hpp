/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:07:18 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/29 01:44:23 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string const type);
	~Weapon();

	std::string const&	getType(void) const;
	void	setType(std::string newType);
};

#endif
