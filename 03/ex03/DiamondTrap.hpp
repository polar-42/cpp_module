/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:44:42 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 16:25:23 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <ClapTrap.hpp>

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		using FragTrap::_hitPoint;
		using FragTrap::_attackDamage;
		using ScavTrap::_energyPoint;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap & operator= (const DiamondTrap & src);
		~DiamondTrap();

		using ScavTrap::attack;
		void	whoAmI(void);
};

#endif
