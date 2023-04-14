/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:41:59 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 11:36:08 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class ICharacter;

class AMateria
{
	protected:
		const std::string &_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria& operator=(AMateria const &src);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
