/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/21 09:44:17 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int	main(void)
{
	ScavTrap	scavTrap("mjuin");

	scavTrap.attack("alrobert");
	scavTrap.setEnergyPoint(0);
	scavTrap.attack("jbutte");
	scavTrap.setEnergyPoint(1);
	scavTrap.attack("jbutte");
	scavTrap.beRepaired(50);
	scavTrap.guardGate();
}
