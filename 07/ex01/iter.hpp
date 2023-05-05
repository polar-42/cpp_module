/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:19:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/26 11:34:14 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cctype>
# include <cstring>

void add(int &n)
{
	n++;
}

void toUppercase(char &c)
{
	if (islower(c))
		c = toupper(c);
}

template<typename T, typename F>
void iter(T *addr, int len, F ft)
{
	if (!addr)
		return ;
	for (int i = 0; i < len; i++)
		ft(addr[i]);
}

#endif
