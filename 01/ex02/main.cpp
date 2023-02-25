/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:29:35 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/20 10:44:18 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str = \t\t" << str << " address = " << &str << std::endl;
	std::cout << "stringPTR = \t" << *stringPTR << " address = " << stringPTR << std::endl;
	std::cout << "stringREF = \t" << stringREF << " address = " << &stringREF << std::endl;
}
