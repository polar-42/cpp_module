/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:41:40 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:44:23 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal & wrongAnimal);
		~WrongAnimal();

		std::string	getType() const;
		void		makeSound() const ;
};

#endif