/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:52:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/16 13:18:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string name)
{
	this->_type = name;
}
