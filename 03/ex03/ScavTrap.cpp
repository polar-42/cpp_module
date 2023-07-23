/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:02:59 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 15:59:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructors is called by " << this->getName() << std::endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name)
{
	std::cout << "ScavTrap copy constructors is called by " << getName() << std::endl;
	setName(src._name);
	setAttackDamage(src._attackDamage);
	setEnergyPoint(src._energyPoint);
	setHitPoint(src._hitPoint);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignement is called by " << getName() << std::endl;
	if (this != &src)
	{
		setName(src._name);
		setAttackDamage(src._attackDamage);
		setEnergyPoint(src._energyPoint);
		setHitPoint(src._hitPoint);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructors is called by " << getName() << std::endl;
}

void	ScavTrap::attack(const std::string target)
{
	if (this->getEnergyPoint() >= 1)
	{
		std::cout << "ScavTrap " << getName() << " attacks "
			<< target << " causing " << getAttackDamage() << " damages" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " don't have enough energy points"
		<< " to attack " << target << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is in guard gate mode" << std::endl;
}
