/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:32:00 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:33:27 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		~Cat();

		void makeSound() const;
		void	setIdea(const std::string idea, const int n);
		const std::string getIdea(const int n);
};

#endif
