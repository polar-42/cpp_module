/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:10:23 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/06 11:13:28 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "The program take numbers in arg" << std::endl;
		return (1);
	}

	try
	{
		PmergeMe p = PmergeMe(argv);
		p.showResult();
	}
	catch(const std::exception& e)
	{
		return (1);
	}

}
