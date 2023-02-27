/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 10:49:32 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int	main(void)
{
	ScavTrap	scavTrap("mjuin");

	scavTrap.attack("alrobert");
	scavTrap.guardGate();
}
