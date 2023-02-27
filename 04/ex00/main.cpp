/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 15:57:19 by fle-tolg         ###   ########.fr       */
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
		delete meta;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* cat = new WrongCat();

		std::cout << "wrong cat is a " << cat->getType() << " and do ";
		cat->makeSound();
		std::cout << std::endl;
		delete cat;
	}
	return (0);
}