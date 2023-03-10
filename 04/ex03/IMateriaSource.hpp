/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:53:42 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/28 16:47:57 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <MateriaSource.hpp>

class IMateriaSource : public virtual MateriaSource
{
	protected:
		std::string _type;
		
	public:
		IMateriaSource();
		IMateriaSource(const IMateriaSource & iMateriaSource);
		IMateriaSource & operator=(const IMateriaSource & iMateriaSource);
		~IMateriaSource();

		void	learnMateria();
};

#endif