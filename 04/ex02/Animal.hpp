/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:49:31 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 13:50:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal & animal);
		Animal& operator=(const Animal & animal);
		virtual ~Animal();

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif
