/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/25 13:41:19 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <Point.hpp>

int main(void)
{
	Point	a(5.0f, 6.5f);
	Point	b(5.0f, 6.5f);
	Point	c(5.0f, 6.5f);
	Point	d(5.0f, 6.5f);

	std::cout << std::boolalpha;
	std::cout << "Is d in the a, b, c triangle == " << bsp(a, b, c, d) << std::endl;
	return (0);
}
