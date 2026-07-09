/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:37:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 19:25:59 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void )
:m_type("DefaultAnimal")
{
	std::cout << RED << "Animal DEFAULT CONSTRUCTOR Called" << RESET << std::endl;
}

Animal::Animal( const Animal &other )
{
	std::cout << RED << "Animal COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Animal	&Animal::operator=( const Animal &other )
{
	std::cout << RED << "Animal COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		this->m_type = other.getType();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal DESTRUCTOR Called" << RESET << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (m_type);
}

void		Animal::makeSound( void ) const
{
	std::cout << RED << "No sound defined for Animal" << RESET << std::endl;
}
