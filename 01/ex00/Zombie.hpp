/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:34:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/14 16:57:07 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

void	randomChump( std::string name );

class Zombie
{
	public:
		void	annouce( void );
		
		Zombie( std::string name );
		Zombie();
		~Zombie();
		
	private:
		std::string	_name;

};

#endif