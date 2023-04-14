/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:25:06 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:32:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog & src);
		Dog& operator=(const Dog & src);
		~Dog();

		void 	makeSound() const;
		void	setIdea(const std::string idea, const int n);
		const std::string getIdea(const int n);
};

#endif
