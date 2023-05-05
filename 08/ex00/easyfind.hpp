/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:39:36 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/27 11:00:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception>

template<typename T>
bool easyfind(T &t, int i)
{
	for (long unsigned int y = 0; y < t.size(); y++)
	{
		if (i == t.at(y))
			return (true);
	}
	throw std::exception();
}

#endif
