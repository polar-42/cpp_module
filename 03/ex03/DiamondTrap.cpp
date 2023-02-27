/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:46:57 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 12:39:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor is called by " << name << std::endl;
	this->_name = this->ClapTrap::_name;
	this->ClapTrap::_name += "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondTrap) : ClapTrap(diamondTrap._name), ScavTrap(diamondTrap._name), FragTrap(diamondTrap._name)
{
	std::cout << "DiamondTrap copy constuctors is called by" << diamondTrap._name << std::endl;
	this->_name = diamondTrap._name;
	this->_hitPoint = diamondTrap._hitPoint;
	this->_attackDamage = diamondTrap._attackDamage;
	this->_energyPoint = diamondTrap._energyPoint;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & diamondTrap)
{
	std::cout << "DiamondTrap copy assignment is called by" << diamondTrap._name << std::endl;
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitPoint = diamondTrap._hitPoint;
		this->_attackDamage = diamondTrap._attackDamage;
		this->_energyPoint = diamondTrap._energyPoint;
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