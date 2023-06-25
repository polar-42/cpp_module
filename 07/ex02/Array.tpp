/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:19:59 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/23 09:00:48 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:20:15 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/27 10:20:04 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <Array.hpp>

template<typename T>
Array<T>::Array() : _size(0)
{
	_arr = new(std::nothrow) T[0];
	if (!_arr)
		throw std::bad_alloc();
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_arr = new(std::nothrow) T[n];
	if (!_arr)
		throw std::bad_alloc();
}

template<typename T>
Array<T>::Array(const Array& src)
{
	*this = src;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
	if (this != &src)
	{
		_size = src._size;
		_arr = new(std::nothrow) T[_size];
		if (!_arr)
			throw std::bad_alloc();
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = src._arr[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator [](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return (_arr[index]);
}

template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

#endif
