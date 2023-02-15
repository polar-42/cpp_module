/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:29:35 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/14 17:41:20 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string *stringREF = &str;

	std::cout << "str = " << str << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
}