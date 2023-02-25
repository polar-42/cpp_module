/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:33:50 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/20 15:48:30 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int n = 5;
	Zombie*	horde = zombieHorde(n, "Zombies");
	if (!horde)
		return (1);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}
