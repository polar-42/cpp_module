/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:34:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/14 17:17:51 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		void	annouce( void );
		void	setName(std::string name);
		
		Zombie();
		~Zombie();
		
	private:
		std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif