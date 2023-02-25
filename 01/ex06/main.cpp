/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:29:52 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/18 12:37:01 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "harlFilter need one argument" << std::endl;
		return (1);
	}

	Harl		harl;
	std::string	level(argv[1]);
	harl.complain(level);
}
