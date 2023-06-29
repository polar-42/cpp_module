/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:45:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/27 11:10:24 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int	main()
{
	std::vector<int> myVector;

	for (int i = 0; i < 50; i++)
		myVector.push_back(i);


	try
	{
		std::cout << std::boolalpha << "try to find 25 = " << easyfind(myVector, 25)
			<< std::endl;
		std::cout << std::boolalpha << "try to find 49 = " << easyfind(myVector, 49)
			<< std::endl;
		std::cout << std::boolalpha << "try to find 65 = " << easyfind(myVector, 65)
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
