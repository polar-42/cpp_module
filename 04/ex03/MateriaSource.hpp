/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:53:42 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 11:42:08 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <IMateriaSource.hpp>
# include <AMateria.hpp>
# include <Cure.hpp>
# include <Ice.hpp>

class AMateria;

class MateriaSource : public virtual IMateriaSource
{
	private:
		AMateria	*_materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & materiaSource);
		MateriaSource & operator=(const MateriaSource & materiaSource);
		~MateriaSource();

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif
