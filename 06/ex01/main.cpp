/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:07:29 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/21 10:59:04 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

int	main()
{
	{
		Data* data = new Data();
		uintptr_t u = Serializer::serialize(data);
		Data* cpyData = Serializer::deserialize(u);

		std::cout << "data =\t\t" << data << std::endl;
		std::cout << "u =\t\t0x" << std::hex << u << std::endl;
		std::cout << "cpyData =\t" << cpyData << std::endl;

		if (data)
			delete data;
	}
}
