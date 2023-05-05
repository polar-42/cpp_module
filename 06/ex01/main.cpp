/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:07:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/25 10:32:17 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

int	main()
{
	{
		Data* data = new Data();
		uintptr_t u = Serializer::serialize(data);

		std::cout << "data =\t" << data << std::endl;
		std::cout << "u =\t0x" << std::hex << u << std::endl;

		delete data;
	}
	std::cout << std::endl;
	{
		Data* data = new Data();
		uintptr_t u = Serializer::serialize(data);
		Data* cpyData = Serializer::deserialize(u);

		std::cout << "u =\t\t0x" << std::hex << u << std::endl;
		std::cout << "cpyData =\t" << cpyData << std::endl;

		delete data;
	}
}
