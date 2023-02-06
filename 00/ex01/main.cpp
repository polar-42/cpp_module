/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:59:28 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/03 15:55:25 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	PhoneBook	phoneBook;

	std::string	action;
	phoneBook.updateSize(0);
	while (1)
	{
		std::cout << "Enter an action: ";
		std::getline(std::cin, action);
		if (action == "ADD")
			phoneBook.addContact();
		else if (action == "SEARCH")
			phoneBook.searchContact();
		else if (action == "EXIT")
			break ;
		else if (action != "")
			std::cout << action <<" isn't a valid action" << std::endl;
	}
	return (0);
}