/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:55:03 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/15 11:24:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon type)
{
	this->_weapon = type;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " destructed" << std::endl;
}