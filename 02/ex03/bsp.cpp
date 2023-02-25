/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:47:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/25 13:40:18 by fle-tolg         ###   ########.fr       */
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
	a1 = area(point, b, c);
	a1 = area(point, c, a);

	one = (a1 < 0) || (a2 < 0) || (a3 < 0);
	two = (a1 > 0) || (a2 > 0) || (a3 > 0);

	return !(one && two);
}
