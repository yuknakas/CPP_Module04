/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:04:18 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 19:40:07 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
:m_type("DefaultWrongAnimal")
{
	std::cout << BLUE << "WrongAnimal DEFAULT CONSTRUCTOR Called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
	std::cout << BLUE << "WrongAnimal COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other )
{
	std::cout << BLUE << "WrongAnimal COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		this->m_type = other.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "WrongAnimal DESTRUCTOR Called" << RESET << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (m_type);
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << BLUE << "Bippity Bop (No Sound Defined for WrongAnimal)" << RESET << std::endl;
}
