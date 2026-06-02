/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:37:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 22:29:42 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void )
{
	this->m_brain = new Brain();
	std::cout << RED << "Animal CONSTRUCTOR Called" << RESET << std::endl;
}

Animal::Animal( const Animal &other )
{
	this->m_type = other.getType();
	this->m_brain = new Brain();
	std::cout << RED << "Animal COPY CONSTRUCTOR Called" << RESET << std::endl;
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

Animal		&Animal::operator=( const Animal &other )
{
	if (this != &other)
	{
		this->m_type = other.getType();
		this->m_brain = other.getBrain();
	}
	return (*this);
}
