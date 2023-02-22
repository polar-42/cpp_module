/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/22 16:11:47 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main(void)
{	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "1 = " << a << std::endl;
	std::cout << "2 = " << ++a << std::endl;
	std::cout << "3 = "  << a << std::endl;
	std::cout << "4 = "  << a++ << std::endl;
	std::cout << "5 = "  << a << std::endl;

	std::cout << b << std::endl;

	//std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
