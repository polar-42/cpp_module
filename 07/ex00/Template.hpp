/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:06:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/27 10:10:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T max(T &x, T &y)
{
	return ((x > y) ? x : y);
}

template<typename T>
T min(T &x, T &y)
{
	return ((x > y) ? y : x);
}

#endif
