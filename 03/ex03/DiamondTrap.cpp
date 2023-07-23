/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:46:57 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 16:23:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor is called by " << name << std::endl;
	this->_name = this->ClapTrap::_name;
	this->ClapTrap::_name += "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name)
{
	std::cout << "DiamondTrap copy constuctors is called by" << src._name << std::endl;
	setName(src._name);
	setHitPoint(src._hitPoint);
	setAttackDamage(src._attackDamage);
	setEnergyPoint(src._energyPoint);
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & src)
{
	std::cout << "DiamondTrap copy assignment is called by" << src._name << std::endl;
	if (this != &src)
	{
		setName(src._name);
		setHitPoint(src._hitPoint);
		setAttackDamage(src._attackDamage);
		setEnergyPoint(src._energyPoint);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor is called by " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hello, my ClapTrap name is " << this->ClapTrap::_name
		<< " and my DiamondTrap name is " << this->_name << std::endl;
}
