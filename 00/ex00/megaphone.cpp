/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:47:28 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/01/31 15:57:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++)
	{
		for (int y = 0; argv[i][y]; y++)
		{
			if (islower(argv[i][y]) == 1)
				std::cout << (char)toupper(argv[i][y]);
			else
				std::cout << argv[i][y];
		}
	}
	std::cout << std::endl;
}