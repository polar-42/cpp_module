/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:03:22 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 12:03:07 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain & brain);
		Brain & operator=(const Brain & brain);
		~Brain();

		void				setIdea(const std::string idea, const int n);
		const std::string	getIdea(const int n);
};

#endif
