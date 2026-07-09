/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:20:56 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:28:19 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
}

Cure::Cure( const Cure &other ) : AMateria( other )
{
	*this = other;
}

Cure	&Cure::operator=( const Cure &other )
{
	if (this != &other)
	{
		AMateria::operator=( other );
	}
	return (*this);
}

Cure::~Cure()
{
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure());
}

void		Cure::use( ICharacter &target )
{
	std::cout << GREEN << "* heals " << target.getName()
	<< "'s wounds *" << RESET << std::endl;
	
}
