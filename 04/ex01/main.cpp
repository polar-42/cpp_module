/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 16:13:25 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	Animal	*animal[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << "Animal[" << i << "]" << " = " << animal[i]->getType();
		std::cout << ", his sound is ";
		animal[i]->makeSound();
		std::cout << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		delete animal[i];
	}
	return (0);
}