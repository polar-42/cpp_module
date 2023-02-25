/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:53:00 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &type) : _weapon( type )
{
	this->_name = name;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destructed" << std::endl;
}
