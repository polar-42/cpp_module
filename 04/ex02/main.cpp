/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:05:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/02/27 16:30:28 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal *dog = new Dog();

	std::cout << "The dog do ";
	dog->makeSound();
	std::cout << std::endl;

	/*This is not possible
	
	const Animal *animal = new Animal();*/
	return (0);
}