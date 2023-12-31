/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:38:36 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 21:34:05 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"

class HumanA
{
private:
	std::string			_name;
	const Weapon&		_aWeapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
};

#endif
