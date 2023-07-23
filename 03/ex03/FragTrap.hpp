/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:50:56 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/21 09:59:28 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap: public virtual ClapTrap
{
	private:

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		FragTrap & operator=(const FragTrap & src);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif
