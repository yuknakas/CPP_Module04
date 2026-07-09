/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:51:30 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:23:35 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : AAnimal()
{
	std::cout << GREEN << "Dog DEFAULT CONSTRUCTOR Called" << RESET << std::endl;
	this->m_type = "Dog";
}

Dog::Dog( const Dog &other ) : AAnimal( other )
{
	std::cout << GREEN << "Dog COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Dog	&Dog::operator=( const Dog &other )
{
	std::cout << GREEN << "Dog COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		AAnimal::operator=( other );
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog DESTRUCTOR Called" << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}
