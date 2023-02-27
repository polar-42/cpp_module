/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:44:42 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 12:31:52 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <ClapTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		using FragTrap::_hitPoint;
		using FragTrap::_attackDamage;
		using ScavTrap::_energyPoint;
	
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &dimondTrap);
		DiamondTrap & operator= (const DiamondTrap & dimondTrap);
		~DiamondTrap();

		using ScavTrap::attack;
		void	whoAmI(void);
};