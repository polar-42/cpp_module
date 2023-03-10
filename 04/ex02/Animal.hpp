/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:49:31 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 16:26:10 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal();
		Animal(const Animal & animal);
		Animal& operator=(const Animal & animal);
	
	public:
		~Animal();

		std::string	getType() const;
		void		makeSound() const ;
};

#endif