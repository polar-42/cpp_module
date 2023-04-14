/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:24:57 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	{
		Dog *dog = new Dog();
		Dog *dog1 = new Dog();

		for (int i = 0; i < 4; i++)
			dog->setIdea("one", i);
		for (int i = 0; i < 4; i++)
			std::cout << "idea[" << i << "] = " << dog->getIdea(i) << std::endl;

		*dog1 = *dog;

		delete dog;

		for (int i = 0; i < 4; i++)
			std::cout << "idea[" << i << "] = " << dog1->getIdea(i) << std::endl;

		delete dog1;
	}
	std::cout << std::endl;
	{
		int 	n = 4;
		Animal	*animals[n];

		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (int i = 0; i < n; i++)
		{
			std::cout << "animals[" << i << "] = ";
			animals[i]->makeSound();
			std::cout << std::endl;
		}

		for (int i = 0; i < n; i++)
			delete animals[i];

	}
	return (0);
}
