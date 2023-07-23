/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:52:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/26 11:46:49 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <exception>
# include <fstream>
# include <iomanip>
# include <istream>
# include <cstdlib>
# include <cstring>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_dataBase;

		std::string _inputFile;

		void	_getValueDB(void);
		void	_getClosestDate(std::string date, std::string n);

	public:
		BitcoinExchange();
		BitcoinExchange(std::string _file);
		BitcoinExchange(const BitcoinExchange& src);
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange();

		void displayTransaction(void);
};

#endif
