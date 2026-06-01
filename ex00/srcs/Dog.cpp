/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:51:30 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 17:54:58 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->m_type = "Dog";
	std::cout << GREEN << "Dog CONSTRUCTOR Called" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog DESTRUCTOR Called" << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}
