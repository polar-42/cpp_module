/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:02:59 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 10:47:02 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructors is called by " << this->getName() << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap._name)
{
	std::cout << "ScavTrap copy constructors is called by " << this->getName() << std::endl;
	this->_name = scavTrap._name;
	this->_attackDamage = scavTrap._attackDamage;
	this->_energyPoint = scavTrap._energyPoint;
	this->_hitPoint = scavTrap._hitPoint;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap copy assignement is called by " << this->getName() << std::endl;
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_attackDamage = scavTrap._attackDamage;
		this->_energyPoint = scavTrap._energyPoint;
		this->_hitPoint = scavTrap._hitPoint;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructors is called by " << this->getName() << std::endl;
}

void	ScavTrap::attack(const std::string target)
{
	if (this->getEnergyPoint() >= 1)
	{
		std::cout << "ScavTrap " << getName() << " attacks "
			<< target << " causing " << getAttatckDamage() << " damages" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " don't have enough energy points"
		<< " to attack " << target << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is in guard gate mode" << std::endl;
}