/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:54:39 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/28 13:36:10 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The btc program take a file in argument" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange ex = BitcoinExchange(argv[1]);
		ex.displayTransaction();
	}
	catch(const std::exception& e)
	{
		return (1);
	}

}
