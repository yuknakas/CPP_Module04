/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:43:52 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 20:11:58 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->m_type = "Cat";
	std::cout << YELLOW << "Cat CONSTRUCTOR Called" << RESET << std::endl;
}

Cat::Cat( const Cat &other ) : Animal( other )
{
	std::cout << MAGENTA << "Cat COPY CONSTRUCTOR Called" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat DESTRUCTOR Called" << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}
