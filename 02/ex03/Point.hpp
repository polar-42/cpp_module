/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:42:19 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/25 13:31:56 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <Fixed.hpp>

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	Point& operator= (const Point &point);
	~Point();

	float getX() const ;
	float getY() const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
