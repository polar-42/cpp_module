/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:46:18 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 16:00:30 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		WrongCat(const WrongCat & wrongcat);
		WrongCat& operator=(const WrongCat & wrongcat);
		~WrongCat();
};

#endif