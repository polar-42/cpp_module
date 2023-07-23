/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:55:27 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/21 10:10:12 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public virtual ClapTrap
{
	private:

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		ScavTrap& operator=(const ScavTrap &src);
		~ScavTrap();

		void	attack( const std::string target );
		void	guardGate();
};

#endif
