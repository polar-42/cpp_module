/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:52:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/15 11:31:34 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_name = name;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
	
}

const std::string	&Weapon::getType()
{
	return (this->_name);
}

void	Weapon::setType(std::string name)
{
	std::cout << "=== " << name << std::endl;
	this->_name = name;
}