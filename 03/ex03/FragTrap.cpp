/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:51:44 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 16:25:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FrapTrap constuctors is called by " << name << std::endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src._name)
{
	std::cout << "FrapTrap copy constuctors is called by" << src._name << std::endl;
	setName(src._name);
	setHitPoint(src._hitPoint);
	setAttackDamage(src._attackDamage);
	setEnergyPoint(src._energyPoint);
}

FragTrap & FragTrap::operator=(const FragTrap & src)
{
	std::cout << "FrapTrap copy assignment is called by" << src._name << std::endl;
	if (this != &src)
	{
		setName(src._name);
		setHitPoint(src._hitPoint);
		setAttackDamage(src._attackDamage);
		setEnergyPoint(src._energyPoint);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FrapTrap destructors is called by " << getName() << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " is requesting a positive high fives"
		<< std::endl;
}
