/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:49:31 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 14:53:35 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <Brain.hpp>

class Animal
{
	protected:
		std::string _type;
		Animal();
		Animal(const Animal & animal);
		Animal& operator=(const Animal & animal);

	public:
		virtual ~Animal();

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif
