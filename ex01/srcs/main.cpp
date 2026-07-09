/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:52:41 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:13:42 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << "==================== TEST CASES ====================" << std::endl;
	
	std::cout << std::endl;
	std::cout << "==================== 10 animals ====================" << std::endl;
	Animal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	std::cout << "==================== Make Sound ====================" << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << std::endl;
	std::cout << "==================== Delete ====================" << std::endl;
	for (int i = 0; i < 10; i++)
		delete (animals[i]);
	
	std::cout << std::endl;
	std::cout << "==================== Deep Copy ====================" << std::endl;
	Dog	*dog1 = new Dog();
	dog1->getBrain()->setIdea("Woof", 0);
	Dog	*dog2 = new Dog(*dog1);
	std::cout << "==================== Test Copy ====================" << std::endl;
	std::cout << "Dog 1: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog 2: " << dog2->getBrain()->getIdea(0) << std::endl;

	std::cout << "==================== Test Change ====================" << std::endl;
	dog1->getBrain()->setIdea("Bow-wow", 0);
	std::cout << "Dog 1: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog 2: " << dog2->getBrain()->getIdea(0) << std::endl;
	
	std::cout << std::endl;
	std::cout << "==================== Destroy ====================" << std::endl;
	delete dog1;
	delete dog2;

	return 0;
}
