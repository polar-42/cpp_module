/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:31:11 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/25 15:23:12 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The RPN program take instructions in quote in argument" << std::endl;
		return (1);
	}

	try
	{
		RPN rpn = RPN(argv[1]);
		std::cout << rpn << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	return (0);
}
