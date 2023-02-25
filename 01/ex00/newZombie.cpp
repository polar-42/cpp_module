/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:40:12 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/20 15:47:06 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *zombie = new(std::nothrow) Zombie(name);

	if (zombie == NULL)
	{
		std::cerr << "Error in allocation" << std::endl;
		return (NULL);
	}
	return (zombie);
}
