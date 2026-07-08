/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:52:41 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 19:45:02 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

void test_normal( void );
void test_wrong( void );

int main()
{
	test_normal();
	test_wrong();
	return 0;
}

void test_normal( void )
{
	std::cout << "====================== TEST ANIMAL ======================" << std::endl;
	
	std::cout << std::endl;
	std::cout << "====================== Default Constructors ======================" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "====================== getType Function ======================" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	std::cout << "====================== makeSound Function ======================" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "====================== OCF ======================" << std::endl;
	Animal *test = new Animal();
	Animal *test2 = new Animal(*test);
	*test = *test2;
	
	std::cout << std::endl;
	std::cout << "====================== OCF Cat ======================" << std::endl;
	Cat *kitty = new Cat();
	Cat *kitty2 = new Cat(*kitty);
	*kitty = *kitty2;
	
	std::cout << std::endl;
	std::cout << "====================== END ANIMAL ======================" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete test;
	delete test2;
	delete kitty;
	delete kitty2;
}

void test_wrong( void )
{
	std::cout << std::endl;
	std::cout << "====================== TEST WRONGANIMAL ======================" << std::endl;
	
	std::cout << std::endl;
	std::cout << "====================== Default Constructor ======================" << std::endl;
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	std::cout << "====================== Member Funcs ======================" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();

	std::cout << std::endl;
	std::cout << "====================== OCF WrongCat ======================" << std::endl;
	WrongCat *kitty = new WrongCat();
	WrongCat *kitty2 = new WrongCat(*kitty);
	*kitty = *kitty2;

	std::cout << std::endl;
	std::cout << "====================== END WRONG ======================" << std::endl;
	delete k;
	delete kitty;
	delete kitty2;
}
