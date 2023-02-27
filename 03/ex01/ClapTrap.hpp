/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:49:23 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 10:42:30 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string 	_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

	public:
		/*Constructors / Destructors*/
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap& operator= (const ClapTrap &clapTrap);
		~ClapTrap();

		/*Getters / Setters*/
		std::string		getName();
		unsigned int	getHitPoint();
		unsigned int	getEnergyPoint();
		unsigned int	getAttatckDamage();
		void			setName(std::string name);
		void			setHitPoint(unsigned int amount);
		void			setEnergyPoint(unsigned int amount);
		void			setAttatckDamage(unsigned int amount);

		/*Functions*/
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
