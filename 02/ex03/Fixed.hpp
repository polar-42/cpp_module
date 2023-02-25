/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:40:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/25 13:44:11 by fle-tolg         ###   ########.fr       */
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
		/*Constructors*/
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed);
		~Fixed();

		/*Comparaison operator*/
		bool operator> (const Fixed &fixed);
		bool operator< (const Fixed &fixed);
		bool operator>= (const Fixed &fixed);
		bool operator<= (const Fixed &fixed);
		bool operator== (const Fixed &fixed);
		bool operator!= (const Fixed &fixed);

		/*Arithmetic operators*/
		float operator+ (const Fixed &fixed);
		float operator- (const Fixed &fixed);
		float operator* (const Fixed &fixed);
		float operator/ (const Fixed &fixed);

		/*Increment | decrement operators*/
		Fixed& operator++ ();
		Fixed& operator-- ();
		Fixed operator++(int);
		Fixed operator--(int);

		/*Functions*/
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed&	min(Fixed &fixed1, Fixed &fixed2);
		static Fixed&	max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed&	min(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed&	max(const Fixed &fixed1, const Fixed &fixed2);
};

/*Overload insertion*/
std::ostream & operator<<(std::ostream &i, Fixed const &fixed);

#endif
