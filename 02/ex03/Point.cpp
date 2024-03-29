/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:43:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/11 12:29:36 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

/*Constructors / Destructors */
Point::Point() : _x( Fixed(0) ), _y( Fixed(0) )
{
}

Point::Point(const float x, const float y) : _x( Fixed(x) ), _y( Fixed(y) )
{
}

Point::Point(const Point &point) : _x( point._x ), _y( point._y )
{
}

Point & Point::operator= (const Point &point)
{
	if (this != &point)
	{
		(Fixed)this->_x = point.getX();
		(Fixed)this->_y = point.getY();
	}
	return (*this);
}

Point::~Point()
{

}

float Point::getX() const
{
	return (this->_x.toFloat());
}

float Point::getY() const
{
	return (this->_y.toFloat());
}
