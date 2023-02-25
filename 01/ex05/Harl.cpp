/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:30:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/18 12:35:24 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void	Harl::debug ( void )
{
	std::cout << "[DEBUG] = I love having extra bacon for my 7XL-double-"
	<< "cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info ( void )
{
	std::cout << "[INFO] = I cannot believe adding extra bacon costs more"
	<< " money. You didn t putenough bacon in my burger! If you did, I wouldn"
	<< " t be asking for more!" << std::endl;
}

void	Harl::warning ( void )
{
	std::cout << "[WARNING] = I think I deserve to have some extra bacon"
	<< " for free. I ve been coming fory ears whereas you started working"
	<< "here since last month." << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "[ERROR] = This is unacceptable! I want to speak to the "
	<< "manager now." << std::endl;
}

void	Harl::other( void )
{
	std::cout << "[OTHER] = This is a invalid complain." << std::endl;
}

void	Harl::complain( std::string level )
{
	void		(Harl::*f[5])() = {&Harl::debug, &Harl::info,
				&Harl::warning, &Harl::error, &Harl::other};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 5; i++)
	{
		if (level == levels[i] || i == 4)
			break ;
	}
	(*this.*f[i])();
}
