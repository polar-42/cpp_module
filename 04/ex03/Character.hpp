/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:35:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 16:38:37 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character
{
	private:
		AMateria	*_items[4];
		std::string	_name;

	public:
		Character(std::string name);
		Character(const Character &src);
		Character& operator=(const Character &src);
		~Character();
};
