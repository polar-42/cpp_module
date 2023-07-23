/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/21 09:38:05 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void)
{
	ClapTrap clapTrap("mrudloff");

	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.attack("gpasquet");
	clapTrap.takeDamage(50);
	clapTrap.attack("gpasquet");
}
