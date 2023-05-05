/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:01:49 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/30 13:05:06 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <deque>
# include <cstring>

class RPN
{
	private:
		std::string			_arg;
		int 				_result;
		std::deque<char>	_container;

		void	_calcResult();
		void	_parseArg();

	public:
		RPN();
		RPN(std::string arg);
		RPN(const RPN&src);
		RPN& operator=(const RPN& src);
		~RPN();

		int getResult() const;
};

std::ostream & operator<<(std::ostream &i, RPN const &src);

#endif
