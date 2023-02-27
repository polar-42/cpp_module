/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:51:44 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 13:40:11 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FrapTrap constuctors is called by " << name << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 30;
	this->_attackDamage = 100;
}

FragTrap::FragTrap(const FragTrap & fragTrap) : ClapTrap(fragTrap._name)
{
	std::cout << "FrapTrap copy constuctors is called by" << fragTrap._name << std::endl;
	this->_name = fragTrap._name;
	this->_hitPoint = fragTrap._hitPoint;
	this->_attackDamage = fragTrap._attackDamage;
	this->_energyPoint = fragTrap._energyPoint;
}

FragTrap & FragTrap::operator=(const FragTrap & fragTrap)
{
	std::cout << "FrapTrap copy assignment is called by" << fragTrap._name << std::endl;
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_hitPoint = fragTrap._hitPoint;
		this->_attackDamage = fragTrap._attackDamage;
		this->_energyPoint = fragTrap._energyPoint;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FrapTrap destructors is called by " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " is requesting a high fives" << std::endl;
}