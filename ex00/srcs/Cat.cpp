/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:43:52 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 19:25:56 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->m_type = "Cat";
	std::cout << YELLOW << "Cat DEFAULT CONSTRUCTOR Called" << RESET << std::endl;
}

Cat::Cat( const Cat &other ) : Animal::Animal( other )
{
	std::cout << YELLOW << "Cat COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Cat	&Cat::operator=( const Cat &other )
{
	std::cout << YELLOW << "Cat COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=( other );
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat DESTRUCTOR Called" << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}
