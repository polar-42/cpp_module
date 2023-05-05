/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:03:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/25 10:26:14 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>


Data::Data() : _name("Data") {}

Data::Data(const Data& src)
{
	*this = src;
}

Data& Data::operator=(const Data& src)
{
	this->_name = src._name;
	return (*this);
}

Data::~Data() {}
