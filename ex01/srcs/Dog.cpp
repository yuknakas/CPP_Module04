/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:51:30 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 20:12:08 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->m_type = "Dog";
	std::cout << GREEN << "Dog CONSTRUCTOR Called" << RESET << std::endl;
}

Dog::Dog( const Dog &other ) : Animal( other )
{
	std::cout << MAGENTA << "Dog COPY CONSTRUCTOR Called" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog DESTRUCTOR Called" << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}
