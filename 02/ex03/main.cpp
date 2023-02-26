/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 09:50:59 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <Point.hpp>

int main(void)
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	d(30, 15);

	std::cout << std::boolalpha;
	std::cout << "Is d in the a, b, c triangle == " << bsp(a, b, c, d) << std::endl;
	return (0);
}
