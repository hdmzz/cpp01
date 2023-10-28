/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:27:27 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/10/28 23:04:20 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPtr = &str;

	std::string	&stringRef = str;

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address held by stringPtr: " << stringPtr << std::endl;
	std::cout << "Memory address held by stringRef: " << &stringRef << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPtr << std::endl;
	std::cout << "value pointed to by stringREF: " << stringRef << std::endl;

	return (0);
}
