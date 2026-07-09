/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:31:07 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:14:57 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain( void )
{	
	std::cout << CYAN << "Brain CONSTRUCTOR Called" << RESET << std::endl;
}

Brain::Brain( const Brain &other )
{
	std::cout << CYAN << "Brain COPY CONSTRUCTOR Called" << RESET << std::endl;
	*this = other;
}

Brain	&Brain::operator=( const Brain &other )
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << CYAN << "Brain DESTRUCTOR Called" << RESET << std::endl;
}

void	Brain::setIdea( std::string idea, int id )
{
	if (0 <= id && id < 100)
		ideas[id] = idea;
}

std::string	Brain::getIdea( int id )
{
	if (0 <= id && id < 100)
		return (ideas[id]);
	return ("Empty");
}
