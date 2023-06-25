/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:12:08 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/22 11:34:41 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

static int detectType(std::string param)
{
	if (param.length() == 0)
	{
		std::cout << "char: empty" << std::endl << "int: empty" << std::endl
			<< "float: empty" << std::endl << "double: empty" << std::endl;
		return (-2);
	}
	int i = 0;
	for (i = 0; (isdigit(param[i]) || (param[i] == '.' && i > 0) || (param[i] == ',' && i > 0)
		|| (param[i] == 'f' && i > 0) || param[i] == '-') && param != "-inf"; i++)
	{
		if (param[i] == '.' || param[i] == ',')
		{
			for (int y = i; param[y]; y++)
			{
				if (param[y] == 'f')
					return (3);
				else if (param.length() == (static_cast<long unsigned>(y) + 1))
					return (4);
			}
		}
		else if (param.length() == (static_cast<long unsigned>(i) + 1))
			return (2);
	}
	if (param.length() == 1)
		return (1);
	else if (isnan(atof(param.c_str())) == 1)
		return (5);
	else if (isinf(atof(param.c_str())) == 1)
		return (6);
	else if (param == "-inf")
		return (7);
	return (-1);
}

void ScalarConverter::display(std::string param)
{
	int info = detectType(param);
	double arg = atof(param.c_str());
	long long check = atoll(param.c_str());

	if (info == -1)
	{
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl
			<< "float: impossible" << std::endl << "double: impossible" << std::endl;
	}
	else if (info == 1)
	{
		std::cout << "char: '" << param << "'" << std::endl << "int: " << static_cast<int>(param[0])
		<< std::endl << "float: " << std::fixed << static_cast<float>(param[0]) << "f"
		<< std::endl << "double: " << std::fixed << static_cast<double>(param[0]) << std::endl;
	}
	else if (info == 2)
	{
		if (arg > 31 && arg < 127)
			std::cout << "char: '" << static_cast<char>(arg) << "'" << std::endl;
		else if ((arg >= 0 && arg < 32) || arg == 127)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		if (check > 2147483647 || check < -2147483648)
			std::cout << "int: overflow";
		else
			std::cout << "int: " << static_cast<int>(arg);
		std::cout << std::endl << "float: " << std::fixed << static_cast<float>(arg) << "f"
		<< std::endl << "double: " << std::fixed << static_cast<double>(arg) << std::endl;
	}
	else if (info == 3 || info == 4)
	{
		if (arg > 31 && arg < 127)
			std::cout << "char: '" << static_cast<char>(arg) << "'" << std::endl;
		else if ((arg >= 0 && arg < 32) || arg == 127)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		if (check > 2147483647 || check < -2147483648)
			std::cout << "int: overflow";
		else
			std::cout << "int: " << static_cast<int>(arg);
		std::cout << std::endl << "float: " << std::fixed << static_cast<float>(arg) << "f"
		<< std::endl << "double: " << std::fixed << static_cast<double>(arg) << std::endl;
	}
	else if (info == 5)
	{
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl
			<< "float: nanf" << std::endl << "double: nan" << std::endl;
	}
	else if (info == 6)
	{
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl
			<< "float: inf" << std::endl << "double: inf" << std::endl;
	}
	else if (info == 7)
	{
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl
			<< "float: -inf" << std::endl << "double: -inf" << std::endl;
	}
}
