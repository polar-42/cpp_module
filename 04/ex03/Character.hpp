/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:55:18 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/14 11:35:17 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <AMateria.hpp>
# include <ICharacter.hpp>

class Character : public virtual ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character();
		Character(const std::string name);
		Character(const Character& src);
		Character& operator=(const Character& src);
		~Character();

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
