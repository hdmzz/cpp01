/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:09:27 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/30 14:50:08 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	errorHandler(std::string msg, int ret)
{
	std::cout << msg << std::endl;
	return (ret);
}

void	replaceStrings(std::ofstream &ofs, std::string line, std::string const toSearch, std::string const subst)//recursive version yesssssss
{
	size_t	pos;
	size_t	posAfterPrevOcc;

	pos = line.find(toSearch);
	if (pos == std::string::npos)//si on arrive a la fin de la string
	{
		ofs << line;
		return ;
	}
	else
	{
		ofs << line.substr(0, pos);
		ofs << subst;
		posAfterPrevOcc = pos + toSearch.length();
		replaceStrings(ofs, line.substr(posAfterPrevOcc), toSearch, subst);
	}
}

int	main(int ac, char **av)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;
	std::string		outFile;
	std::string		temp;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
		return (errorHandler("Usage: ./sed filename s1 s2", 1));

	s1 = av[2];//a remplacer
	s2 = av[3];//par quoi remplacer

	file = av[1];
	ifs.open(file.c_str());
	if (ifs.good() == false)
		return (errorHandler("Can't open the file", 1));

	outFile = file + ".replace";
	ofs.open(outFile.c_str());
	if (ofs.good() == false)
	{
		//en cas d'erreur fermer le infile
		ifs.close();
		return (errorHandler("Can't open the outfile", 1));
	}

	//Si tout se passe bien on est la il faut lire et faire les remplacement 
	while (std::getline(ifs, temp))
	{
		replaceStrings(ofs, temp + '\n', s1.c_str(), s2.c_str());//passe une reference a ofs et pas juste lui transmettre ofs
	}
	
	//pas oublier de fermer tout ce qui doit l'etre
	ifs.close();
	ofs.close();
}