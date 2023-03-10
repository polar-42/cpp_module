/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:53:42 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/28 16:45:34 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

class MateriaSource
{
	protected:
		MateriaSource();
		
	public:
		MateriaSource(const MateriaSource & materiaSource);
		MateriaSource & operator=(const MateriaSource & materiaSource);
		~MateriaSource();
};

#endif