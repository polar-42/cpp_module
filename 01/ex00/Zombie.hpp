/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:34:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/19 15:43:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


class Zombie
{
	public:
		void	announce( void );

		Zombie( std::string name );
		Zombie();
		~Zombie();

	private:
		std::string	_name;

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
