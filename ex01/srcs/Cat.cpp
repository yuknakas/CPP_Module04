/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:43:52 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 22:44:25 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << YELLOW << "Cat CONSTRUCTOR Called" << RESET << std::endl;
	this->m_type = "Cat";
}

Cat::Cat( const Cat &other ) : Animal( other )
{
	std::cout << MAGENTA << "Cat COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Cat	&Cat::operator=( const Cat &other )
{
	std::cout << MAGENTA << "Cat COPY CONSTRUCTOR Called" << RESET << std::endl;
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
