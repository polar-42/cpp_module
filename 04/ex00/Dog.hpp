/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:25:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:40:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>

class Dog : public Animal
{
	private:
		
	public:
		Dog();
		Dog(const Dog & dog);
		Dog& operator=(const Dog & dog);
		~Dog();
};

#endif