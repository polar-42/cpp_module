/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:25:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 11:09:23 by fle-tolg         ###   ########.fr       */
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
		Dog(const Dog & src);
		Dog& operator=(const Dog & src);
		~Dog();

		void makeSound() const;
};

#endif
