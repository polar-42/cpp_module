/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:42:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 14:15:46 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

/*Constructors and destructors*/
Fixed::Fixed()
{
	this->_fixedPoint = 0;
}

Fixed::Fixed(const int i)
{
	this->_fixedPoint = i << this->_cFixedPoint;
}

Fixed::Fixed(const float i)
{
	this->_fixedPoint = i * (1 << this->_cFixedPoint);
}

Fixed::Fixed(const Fixed &src)
{
	this->_fixedPoint = src.getRawBits();
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		this->_fixedPoint = src.getRawBits();
	return (*this);
}

/*Comparaison operator*/
bool Fixed::operator> (const Fixed &src)
{
	if (this->toFloat() > src.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator< (const Fixed &src)
{
	if (this->toFloat() < src.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>= (const Fixed &src)
{
	if (this->toFloat() >= src.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<= (const Fixed &src)
{
	if (this->toFloat() <= src.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator== (const Fixed &src)
{
	if (this->toFloat() == src.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!= (const Fixed &src)
{
	if (this->toFloat() != src.toFloat())
		return (true);
	return (false);
}

/*Arithmetic operators*/
float Fixed::operator+(const Fixed &src)
{
	return (this->toFloat() + src.toFloat());
	//return (*this);
}

float Fixed::operator-(const Fixed &src)
{
	return (this->toFloat() - src.toFloat());
}

float Fixed::operator*(const Fixed &src)
{
	return (this->toFloat() * src.toFloat());
}

float Fixed::operator/(const Fixed &src)
{
	return (this->toFloat() / src.toFloat());
}

/*Increment | decrement operators*/
Fixed & Fixed::operator++()
{
	++this->_fixedPoint;
	return (*this);
}

Fixed & Fixed::operator--()
{
	--this->_fixedPoint;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++_fixedPoint;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--_fixedPoint;
	return (tmp);
}

/*Functions*/
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

Fixed&	min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (fixed2);
	return (fixed1);
}

Fixed&	max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return (fixed2);
	return (fixed1);
}

const Fixed&	Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (fixed2);
	return (fixed1);
}

const Fixed&	Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return (fixed2);
	return (fixed1);
}

/*Overload insertion*/
std::ostream & operator << (std::ostream & i, Fixed const &src)
{
	i << src.toFloat();
	return (i);
}
