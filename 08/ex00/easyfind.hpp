/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:39:36 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/24 11:22:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

template<typename T>
bool easyfind(T &t, int i)
{
	if (std::count(t.begin(), t.end(), i) > 0)
		return (true);
	throw std::exception();
}

#endif
