/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:24:45 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/23 08:57:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

int	main()
{
	{
		int	array[5]; array[0] = 0; array[1] = 1; array[2] = 2; array[3] = 3; array[4] = 4;
		std::cout << "array = " << array[0] << "-" << array[1] << "-" << array[2] << "-"
		<< array[3] << "-" << array[4] << std::endl;

		::iter(array, 5, &add);
		std::cout << "funtion add = all numbers++" << std::endl;

		std::cout << "array = " << array[0] << "-" << array[1] << "-" << array[2] << "-"
		<< array[3] << "-" << array[4] << std::endl;
	}
	std::cout << std::endl;
	{
		char	array[12] = "Hello World";
		std::cout << array << std::endl;

		::iter(array, 11, &toUpperCase);
		std::cout << "funtion = toUpperCase" << std::endl;

		std::cout << array << std::endl;

		::iter(array, 11, &toLowerCase);
		std::cout << "funtion = toLowerCase" << std::endl;

		std::cout << array << std::endl;
	}
}
