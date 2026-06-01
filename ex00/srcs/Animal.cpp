/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:37:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 17:58:59 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void )
{
	std::cout << RED << "Animal CONSTRUCTOR Called" << RESET << std::endl;
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
