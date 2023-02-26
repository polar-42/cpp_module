/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:47:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 09:46:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

static float area(Point const a, Point const b, Point const c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (c.getY() - c.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	a1, a2, a3;
	bool	one, two;

	a1 = area(point, a, b);
	a2 = area(point, b, c);
	a3 = area(point, c, a);

	one = (a1 < 0) || (a2 < 0) || (a3 < 0);
	two = (a1 > 0) || (a2 > 0) || (a3 > 0);

	return !(one && two);
}
