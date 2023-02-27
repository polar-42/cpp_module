/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:50:56 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 12:26:37 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

class FragTrap : public virtual ClapTrap
{
	private:

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap & fragTrap);
		FragTrap & operator=(const FragTrap & fragTrap);
		~FragTrap();

		void	highFivesGuys(void);
};