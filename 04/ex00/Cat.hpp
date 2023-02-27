/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:32:00 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:45:45 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		Cat(const Cat & cat);
		Cat& operator=(const Cat & cat);
		~Cat();
};

#endif