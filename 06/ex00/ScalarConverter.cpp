/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:12:08 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/01 15:51:41 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

static void displayChar(char c, int i)
{
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

static void displayInt(long long i)
{
	if (i > 2147483647 || i < -2147483648)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

static void displayFloat(float f)
{
	std::cout << "float: " << f << std::endl;
}

static void displayDouble(double d)
{
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::display(std::string param)
{
	double arg = atof(param.c_str());
	long long check = atoll(param.c_str());

	if (std::isfinite(arg) == 1)
	{
		if (param.size() == 1 && isdigit(param[0]) == 0)
			displayChar(param[0], static_cast<int>(param[0]));
		else
			displayChar(static_cast<char>(arg), static_cast<int>(arg));
		displayInt(check);
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	if (isnan(arg) == 1)
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (isinf(arg) == 1)
	{
		std::cout << "float: inf" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else
	{
		displayFloat(static_cast<float>(arg));
		displayDouble(arg);
	}
}
