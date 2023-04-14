/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/09 14:35:12 by fle-tolg         ###   ########.fr       */
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
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "dog is a " << dog->getType() << " and do ";
		dog->makeSound();
		std::cout << std::endl;
		std::cout << "cat is a " << cat->getType() << " and do ";
		cat->makeSound();
		std::cout << std::endl;

		delete dog;
		delete cat;
	}
	std::cout << std::endl;
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

	//	This is not possible:
	//const Animal *animal = new Animal();
	//Animal *animal = new Animal();
	//const Animal animal;
	//Animal animal;

	return (0);
}
