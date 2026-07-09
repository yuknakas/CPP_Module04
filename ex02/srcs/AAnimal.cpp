/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:37:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:29:36 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << RED << "AAnimal CONSTRUCTOR Called" << RESET << std::endl;
	this->m_brain = new Brain();
}

AAnimal::AAnimal( const AAnimal &other )
{
	std::cout << RED << "AAnimal COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

AAnimal	&AAnimal::operator=( const AAnimal &other )
{
	std::cout << RED << "AAnimal COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		this->m_type = other.getType();
		delete (this->m_brain);
		this->m_brain = new Brain(*other.getBrain());
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	delete (m_brain);
	std::cout << RED << "AAnimal DESTRUCTOR Called" << RESET << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return (m_type);
}

Brain*		AAnimal::getBrain( void ) const
{
	return (m_brain);
}

void		AAnimal::makeSound( void ) const
{
	std::cout << RED << "No sound defined for AAnimal" << RESET << std::endl;
}
