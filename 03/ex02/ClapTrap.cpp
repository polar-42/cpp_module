/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:53:31 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/20 15:47:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

/*Constructors / Destructors*/
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap default constructor is called by " << name << std::endl;
	setName(name);
	setAttackDamage(0);
	setEnergyPoint(10);
	setHitPoint(10);
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor is called by "
		<< src._name << std::endl;
	setName(src._name);
	setAttackDamage(src._attackDamage);
	setEnergyPoint(src._energyPoint);
	setHitPoint(src._hitPoint);
}

ClapTrap & ClapTrap::operator= (const ClapTrap &src)
{
	std::cout << "ClapTrap copy assignement constructor is called by "
		<< src._name << std::endl;
	if (this != &src)
	{
		setName(src._name);
		setAttackDamage(src._attackDamage);
		setEnergyPoint(src._energyPoint);
		setHitPoint(src._hitPoint);
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor is called by " << getName() << std::endl;
}

/*Setters / Getters */
std::string		ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

unsigned int	ClapTrap::getAttackDamage() const
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

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

/*Functions*/
void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() >= 1 && this->getHitPoint() >= 1)
	{
		std::cout << "ClapTrap " << getName() << " attacks "
			<< target << " causing " << getAttackDamage() << " damages" << std::endl;
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " is dead or don't have enough "
		<< "energy points to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " takes "
		<< amount << " damages" << std::endl;
	setHitPoint(getHitPoint() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoint() >= 1 && this->getHitPoint() >= 1)
	{
		std::cout << "ClapTrap " << getName() << " repairs itself and get "
			<< amount << " hit points back" << std::endl;
		setHitPoint(getHitPoint() + amount);
		setEnergyPoint(getEnergyPoint() - 1);
	}
	else
		std::cout << "ClapTrap " << getName() << " is dead or don't have enough "
		<< "energy points to repairs itself " << std::endl;
}
