/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:53:29 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:28:48 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
}

Ice::Ice( const Ice &other ) : AMateria( other )
{
	*this = other;
}

Ice	&Ice::operator=( const Ice &other )
{
	if (this != &other)
	{
		AMateria::operator=( other );
	}
	return (*this);
}


Ice::~Ice()
{
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice());
}

void		Ice::use( ICharacter &target )
{
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName()
	<< " *" << RESET << std::endl;
	
}
