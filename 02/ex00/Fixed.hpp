/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:40:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/19 11:46:56 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_cFixedPoint = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
