/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:55:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/26 10:44:17 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

class ScavTrap: public ClapTrap
{
	private:


	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & scavTrap);
		ScavTrap& operator=(const ScavTrap &scavTrap);
		~ScavTrap();

		void	attack( const std::string target );
		void	guardGate();
};