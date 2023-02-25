/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:30:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/18 12:43:29 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void	Harl::debug ( void )
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my 7XL-double-"
	<< "cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info ( void )
{
	std::cout << "[ INFO ] " << std::endl
	<< "I cannot believe adding extra bacon costs more"
	<< " money. You didn t putenough bacon in my burger! If you did, I wouldn"
	<< " t be asking for more!" << std::endl;
}

void	Harl::warning ( void )
{
	std::cout << "[ WARNING ] " << std::endl
	<< "I think I deserve to have some extra bacon"
	<< " for free. I ve been coming fory ears whereas you started working"
	<< "here since last month." << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "[ ERROR ] " << std::endl
	<< "This is unacceptable! I want to speak to the "
	<< "manager now." << std::endl;
}

void	Harl::other( void )
{
	std::cout << "[ OTHER ]" << std::endl
	<< "Probably complaining about insignificant problems" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break ;
	}

	switch (i)
	{
	case 0 :
		this->debug();
		__attribute__((fallthrough));
	case 1 :
		this->info();
		__attribute__((fallthrough));
	case 2 :
		this->warning();
		__attribute__((fallthrough));
	case 3 :
		this->error();
		break ;
	default:
		this->other();
	}
}
