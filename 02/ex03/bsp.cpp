/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:47:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 14:49:26 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

static float area(Point const a, Point const b, Point const c)
{
	float det = (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
	if (det < 0)
		return ((det / 2.0f) * -1);
	return (det / 2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	a0, a1, a2, a3;

	a0 = area(a, b, c);
	a1 = area(point, a, b);
	a2 = area(point, b, c);
	a3 = area(point, c, a);

	if ((a1 + a2 + a3) > a0 || a1 == 0 || a2 == 0 || a3 == 0)
		return (false);
	return (true);
}
