/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:04:18 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 18:09:57 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << BLUE << "WrongAnimal CONSTRUCTOR Called" << RESET << std::endl;
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
	std::cout << BLUE << "Bippity Bop (No Sound Defined for WrongAnimal)" << std::endl;
}
