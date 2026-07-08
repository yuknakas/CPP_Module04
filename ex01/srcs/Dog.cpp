/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:51:30 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:16:42 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << GREEN << "Dog DEFAULT CONSTRUCTOR Called" << RESET << std::endl;
	this->m_type = "Dog";
}

Dog::Dog( const Dog &other ) : Animal::Animal( other )
{
	std::cout << GREEN << "Dog COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Dog	&Dog::operator=( const Dog &other )
{
	std::cout << GREEN << "Dog COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=( other );
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
