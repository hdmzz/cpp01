/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:38:49 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/29 04:08:50 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	usage()
{
	std::cout << "Usage : ./sed filename s1 s2" << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	std::ifstream	fileIn;//lire dans un fichier
	std::ofstream	fileOut;//faire des manip et ecrire le resultat dans un autre fichier

	if (ac != 4)
		return (usage());

	//maintenant il faut recuperer le chemin d'acces du fichier 
	std::string		infile = av[1];
	std::string		outfile = infile;
	std::string		toReplace = av[2];
	std::string		toReplaceWith = av[3];

	
}
