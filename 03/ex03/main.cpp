/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/21 10:08:44 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int	main(void)
{
	DiamondTrap diamondTrap("cormiere");

	diamondTrap.whoAmI();
	diamondTrap.attack("gtouzali");
	diamondTrap.beRepaired(50);
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
}
