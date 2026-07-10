/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:37:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/10 17:10:54 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void )
{
	std::cout << RED << "Animal CONSTRUCTOR Called" << RESET << std::endl;
	this->m_brain = new Brain();
}

Animal::Animal( const Animal &other )
{
	std::cout << RED << "Animal COPY CONSTRUCTOR Called" << RESET << std::endl;
	this->m_brain = new Brain();
	*this = other;
}

Animal	&Animal::operator=( const Animal &other )
{
	std::cout << RED << "Animal COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		this->m_type = other.getType();
		delete (this->m_brain);
		this->m_brain = new Brain(*other.getBrain());
	}
	return (*this);
}

Animal::~Animal()
{
	delete (m_brain);
	std::cout << RED << "Animal DESTRUCTOR Called" << RESET << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (m_type);
}

Brain*		Animal::getBrain( void ) const
{
	return (m_brain);
}

void		Animal::makeSound( void ) const
{
	std::cout << RED << "No sound defined for Animal" << RESET << std::endl;
}
