/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:56:00 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/21 11:50:38 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

int	main()
{
	{
		Base *base = NULL;

		std::cout << "base is a ";
		base->identify(base);
		std::cout << std::endl;
		if (base)
			delete base;
	}
	std::cout << std::endl;
	{
		Base *base = Base::generate();

		std::cout << "base is a ";
		base->identify(base);
		std::cout << std::endl;
		if (base)
			delete base;
	}
	std::cout << std::endl;
	{
		Base *base = Base::generate();

		std::cout << "base is a ";
		base->identify(*base);
		std::cout << std::endl;
		delete base;
	}
}
