/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:40:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/22 16:06:47 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_cFixedPoint = 8;

	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed);
		Fixed& operator> (const Fixed &fixed);
		Fixed& operator< (const Fixed &fixed);
		Fixed& operator>= (const Fixed &fixed);
		Fixed& operator<= (const Fixed &fixed);
		Fixed& operator== (const Fixed &fixed);
		Fixed& operator!= (const Fixed &fixed);
		Fixed& operator+ (const Fixed &fixed);
		Fixed& operator- (const Fixed &fixed);
		Fixed& operator* (const Fixed &fixed);
		Fixed& operator/ (const Fixed &fixed);
		Fixed& operator++ ();
		Fixed& operator-- ();
		Fixed operator++(int a);
		//Fixed& operator-- (const Fixed &fixed);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int&	min(int &fixed1, int &fixed2) const;
		int&	max(int &fixed1, int &fixed2) const;
		static int&	min(const int &sFixed1, const int &sFixed2);
		static int&	max(const int &fixed1, const int &fixed2);
};

std::ostream & operator<<(std::ostream &i, Fixed const &fixed);

#endif
