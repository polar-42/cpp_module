/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:55:03 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/19 16:03:27 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	if (this->_weapon == NULL)
		std::cout << "big hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " destructed" << std::endl;
}
