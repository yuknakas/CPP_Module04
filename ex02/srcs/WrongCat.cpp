/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:12:35 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:25:14 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->m_type = "WrongCat";
	std::cout << CYAN << "WrongCat CONSTRUCTOR Called" << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal( other )
{
	std::cout << CYAN << "WrongCat COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

WrongCat	&WrongCat::operator=( const WrongCat &other )
{
	std::cout << CYAN << "WrongCat COPY ASSIGNMENT OPERATOR Called" << RESET << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=( other );
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << CYAN << "WrongCat DESTRUCTOR Called" << RESET << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << CYAN << "Bogos Binted?" << RESET << std::endl;
}
