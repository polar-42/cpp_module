/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/23 14:46:39 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main(void)
{	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a\t=\t" << a << std::endl;
	std::cout << "++a\t=\t" << ++a << std::endl;
	std::cout << "a\t=\t"  << a << std::endl;
	std::cout << "a++\t=\t"  << a++ << std::endl;
	std::cout << "a\t=\t"  << a << std::endl;
	std::cout << "a--\t=\t"  << a-- << std::endl;
	std::cout << "a\t=\t"  << a << std::endl;
	std::cout << "--a\t=\t"  << --a << std::endl;
	std::cout << "a\t=\t"  << a << std::endl;

	std::cout << "b\t= \t" << b << std::endl;

	std::cout << std::endl;
	std::cout << "Fixed::min(a, b) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "Fixed::max(a, b) = " << Fixed::max( a, b ) << std::endl;

	return 0;
}
