/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:37:59 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 16:42:59 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character(std::string name)
{
	std::cout << "Character is called by " << name << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constuctor called by " << src._name << std::endl;
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		_items[i] = src._items[i];
}

Character& Character::operator=(const Character &src)
{
	std::cout << "Character copy assignement constuctor called by " << src._name << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
			_items[i] = src._items[i];
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destuctor called by " << _name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i]);
			delete _items[i];
	}
}

//
		//Character(std::string &name);
		//Character(const Character &src);
		//Character& operator=(const Character &src);
		//~Character();
