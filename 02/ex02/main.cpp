/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/18 14:38:11 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main(void)
{
	{
		Fixed a(5);
		Fixed b(5);
		Fixed c(4);
		std::cout << "Comparaisons operators:" << std::endl << std::boolalpha;
		std::cout << "\ta(5) == b(5) == " << (a == b) << std::endl;
		std::cout << "\tc(4) < b(5) == " << (c < b) << std::endl;
		std::cout << "\ta(5) > c(4) == " << (a > c) << std::endl;
		std::cout << "\ta(5) >= b(5) == " << (a >= b) << std::endl;
		std::cout << "\ta(5) <= b(5) == " << (a <= b) << std::endl;
		std::cout << "\tc(4) != b(5) == " << (c != b) << std::endl;
		std::cout << std::endl;
	}
	{
		Fixed a(5);
		Fixed b(5);
		Fixed c(100);
		std::cout << "Arithmetic operators:" << std::endl;
		std::cout << "\ta(5) + b(5) == " << a + b << std::endl;
		std::cout << "\ta(5) - b(5) == " << a - b << std::endl;
		std::cout << "\ta(5) * b(5) == " << a * b << std::endl;
		std::cout << "\tc(100) / b(5) == " << c / b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Increment / Decrement operators:" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "\ta =\t" << a << std::endl;
		std::cout << "\t++a =\t" << ++a << std::endl;
		std::cout << "\ta =\t"  << a << std::endl;
		std::cout << "\ta++ =\t"  << a++ << std::endl;
		std::cout << "\ta =\t"  << a << std::endl;
		std::cout << "\ta-- =\t"  << a-- << std::endl;
		std::cout << "\ta =\t"  << a << std::endl;
		std::cout << "\t--a =\t"  << --a << std::endl;
		std::cout << "\ta =\t"  << a << std::endl;

		std::cout << "\tb = \t" << b << std::endl;

		std::cout << std::endl;
	}
	{
		Fixed const a(4.5f);
		Fixed const b(10.5f);
		Fixed c(100);

		std::cout << "Fixed::min(4.5, 10.5) = " << Fixed::min( a, b ) << std::endl;
		std::cout << "Fixed::max(4.5, 10.5) = " << Fixed::max( a, b ) << std::endl;
		std::cout << "Fixed::min(4.5, 100) = " << Fixed::max( a, c ) << std::endl;
	}
	return 0;
}
