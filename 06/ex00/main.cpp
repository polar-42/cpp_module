/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:07:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/25 09:13:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error, the program takes one argument" << std::endl;
		return (1);
	}
	ScalarConverter::display((std::string)argv[1]);
}
