/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 14:49:11 by fle-tolg         ###   ########.fr       */
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
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "dog is a " << dog->getType() << " and do ";
		dog->makeSound();
		std::cout << std::endl;
		std::cout << "cat is a " << cat->getType() << " and do ";
		cat->makeSound();
		std::cout << std::endl;
		std::cout << "meta is a " << meta->getType() << " and do ";
		meta->makeSound();
		std::cout << std::endl;

		const Animal* meta2 = new Animal(*meta);

		delete meta;
		delete dog;
		delete cat;

		std::cout << "meta2 is a " << meta2->getType() << " and do ";
		meta2->makeSound();
		std::cout << std::endl;

		delete meta2;
	}
	std::cout << std::endl;
	{
		const Dog *dog = new Dog();

		std::cout << "dog is a " << dog->getType() << " and do ";
		dog->makeSound();
		std::cout << std::endl;

		const Dog *dog2 = new Dog(*dog);

		delete dog;

		std::cout << "dog2 is a " << dog2->getType() << " and do ";
		dog2->makeSound();
		std::cout << std::endl;

		delete dog2;
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
