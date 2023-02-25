/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:33:50 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/20 15:45:08 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Zombie	*zombie = newZombie("Zombie1");
	if (!zombie)
		return (1);
	zombie->announce();
	randomChump("Zombie2");
	delete zombie;
	return (0);
}
