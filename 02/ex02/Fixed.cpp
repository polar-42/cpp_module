/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:42:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/23 14:48:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

//static Fixed&	min(Fixed &fixed1, Fixed &fixed2);
//static Fixed&	max(Fixed &fixed1, Fixed &fixed2);
//static Fixed&	min(const Fixed &fixed1, const Fixed &fixed2);
//static Fixed&	max(const Fixed &fixed1, const Fixed &fixed2);

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

Fixed::Fixed(const Fixed &fixed)
{
	this->_fixedPoint = fixed.getRawBits();
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
		this->_fixedPoint = fixed.getRawBits();
	return (*this);
}

/*Comparaison operator*/
bool operator> (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() > f2.toFloat());
}

bool operator< (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() < f2.toFloat());
}

bool operator>= (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() >= f2.toFloat());
}

bool operator<= (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() <= f2.toFloat());
}

bool operator== (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() == f2.toFloat());
}

bool operator!= (const Fixed &f1, const Fixed &f2)
{
	return (f1.toFloat() != f2.toFloat());
}

/*Arithmetic operators*/
Fixed &Fixed::operator+(const Fixed &fixed)
{
	this->_fixedPoint += fixed.getRawBits();
	return (*this);
}

Fixed & Fixed::operator-(const Fixed &fixed)
{
	this->_fixedPoint -= fixed.getRawBits();
	return (*this);
}

Fixed & Fixed::operator*(const Fixed &fixed)
{
	this->_fixedPoint *= fixed.toFloat();
	return (*this);
}

Fixed & Fixed::operator/(const Fixed &fixed)
{
	this->_fixedPoint /= fixed.getRawBits();
	return (*this);
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
std::ostream & operator << (std::ostream & i, Fixed const &fixed)
{
	i << fixed.toFloat();
	return (i);
}
