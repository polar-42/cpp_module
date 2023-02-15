/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:33:50 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/14 17:20:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int n = 5;
	Zombie*	horde = zombieHorde(n, "Zombies");
	for (int i = 0; i < n; i++)
	{
		horde[i].annouce();
	}
	delete [] horde;
}