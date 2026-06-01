/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:52:41 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 20:07:33 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

void test_array()
{
	int	i;
	Animal*	animal[10];

	i = 0;
	while (i < 5)
	{
		animal[i] = new Cat();
		i++;
	}
	while (i < 10)
	{
		animal[i] = new Dog();
		i++;
	}

	i = 0;
	while (i < 10)
	{
		delete animal[i];
		i++;
	}
}

void test_deep_copy()
{
	Dog*	j = new Dog();
	Animal* k = new Dog(*j);

	delete(j);
	delete(k);
}

int	main()
{
	test_array();
	test_deep_copy();
	return 0;
}
