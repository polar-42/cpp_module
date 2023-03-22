/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:58:48 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/20 14:32:40 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int	main(void)
{
	Bureaucrat *bureaucrat = new Bureaucrat("Bill", 50);

	std::cout << bureaucrat << std::endl;

	delete bureaucrat;
}
