/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/22 14:53:51 by fle-tolg         ###   ########.fr       */
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

	//	This is not possible:
	//const Animal *animal = new Animal();
	//Animal *animal = new Animal();
	//const Animal animal;
	//Animal animal;

	return (0);
}
