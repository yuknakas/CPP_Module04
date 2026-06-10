/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:20:56 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/10 10:59:16 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
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

Cure		&Cure::operator=( const Cure &other )
{
	if (this != &other)
		this->m_type = other.getType();
	return (*this);
}
