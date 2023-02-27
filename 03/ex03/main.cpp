/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:13:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 12:39:52 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int	main(void)
{
	DiamondTrap diamondTrap("cormiere");

	diamondTrap.whoAmI();
	diamondTrap.attack("gtouzali");
}
