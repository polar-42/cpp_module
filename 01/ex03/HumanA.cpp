/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:53:00 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/15 11:43:12 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon type)
{
	this->_name = name;
	this->_weapon = type;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destructed" << std::endl;
}