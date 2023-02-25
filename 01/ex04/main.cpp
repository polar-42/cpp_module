/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:16:53 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/22 09:41:20 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <newSed.hpp>

static std::string	newSed(std::string file, std::string s1, std::string s2)
{
	int i = 0;
	while (file.find(s1, i) != (size_t)-1 && !s1.empty() && s1 != s2)
	{
		size_t y = file.find(s1, i);
		file.erase(file.find(s1, i), s1.length());
		if (file.find(s1, i) + s2.length() < (size_t)i)
		{
			file.insert(y, s2);
			break ;
		}
		i = file.find(s1, i) + s2.length();
		file.insert(y, s2);
	}
	return (file);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "newSed need three arguments" << std::endl;
		return (1);
	}

	std::string		fileName(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string 	file;
	std::ifstream	input;
	std::ofstream	output;

	input.open(argv[1], std::ifstream::in);
	if (input.is_open() == false)
	{
		std::string s(argv[1]);
		std::cerr << s << " cannot be open" << std::endl;
		return (1);
	}
	std::cout << argv[1] << " opened" << std::endl;

	output.open((fileName + ".replace").c_str(), std::ifstream::out);
	if (output.is_open() == false)
	{
		std::cerr << fileName + ".replace" << " cannot be create" << std::endl;
		return (1);
	}
	std::cout << fileName + ".replace created" << std::endl;

	while (input)
		file += input.get();
	file.erase(file.length() - 1);

	file = newSed(file, s1, s2);

	output << file;
}
