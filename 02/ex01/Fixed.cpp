/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:42:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/22 11:51:04 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

	//float b = ((float)a / (float)(1 << 8)); //int to float
	//int c = (int)(roundf(b * (1 << 8))); //float to int

	//roundf

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = i << this->_cFixedPoint;
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = i * (1 << this->_cFixedPoint);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPoint = fixed.getRawBits();
}

Fixed & Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fixedPoint = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (this->_fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << this->_cFixedPoint));
}

int	Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->_cFixedPoint);
}

std::ostream & operator << (std::ostream & i, Fixed const &fixed)
{
	i << fixed.toFloat();
	return (i);
}
