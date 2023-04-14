/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:10:41 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/11 10:20:05 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>
# include <ICharacter.hpp>

class Ice : public virtual AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice &src);
		Ice& operator=(const Ice &src);
		~Ice();

		AMateria* clone() const;
		void 	use(ICharacter& target);
};

#endif
