/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:53:31 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 10:49:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

/*Constructors / Destructors*/
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructors is called by " << name << std::endl;
	this->_name = name;
	this->_attackDamage = 0;
	this->_energyPoint = 10;
	this->_hitPoint = 10;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap copy constructors is called by " << clapTrap._name << std::endl;
	this->_name = clapTrap._name;
	this->_attackDamage = clapTrap._attackDamage;
	this->_energyPoint = clapTrap._energyPoint;
	this->_hitPoint = clapTrap._hitPoint;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap copy assignemnt is called by " << clapTrap._name << std::endl;
	if (this != &clapTrap)
	{
		this->_name = clapTrap._name;
		this->_attackDamage = clapTrap._attackDamage;
		this->_energyPoint = clapTrap._energyPoint;
		this->_hitPoint = clapTrap._hitPoint;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructors is called by " << this->_name << std::endl;
}

/*Setters / Getters */
std::string		ClapTrap::getName()
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoint()
{
	return (this->_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint()
{
	return (this->_energyPoint);
}

unsigned int	ClapTrap::getAttatckDamage()
{
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoint(unsigned int amount)
{
	this->_hitPoint = amount;
}

void	ClapTrap::setEnergyPoint(unsigned int amount)
{
	this->_energyPoint = amount;
}

void	ClapTrap::setAttatckDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

/*Functions*/
void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() >= 1)
	{
		std::cout << "ClapTrap " << getName() << " attacks "
			<< target << " causing " << getAttatckDamage() << " damages" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " don't have enough energy points"
		<< " to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " takes "
		<< amount << " damages" << std::endl;
	setEnergyPoint(getEnergyPoint() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoint() >= 1)
	{
		std::cout << "ClapTrap " << getName() << " repairs itself and get "
			<< amount << " hit points back" << std::endl;
		setHitPoint(getHitPoint() + amount);
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << "don't have enough energy point" << std::endl;
}
