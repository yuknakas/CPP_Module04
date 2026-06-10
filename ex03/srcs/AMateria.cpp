/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:21:59 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/06 20:05:12 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria( std::string const &type )
:m_type(type)
{
}

AMateria::AMateria( const AMateria &other )
{
	*this = other;
}

AMateria::~AMateria()
{
}

std::string const	&AMateria::getType( void ) const
{
	return (m_type);
}

AMateria			&AMateria::operator=( const AMateria &other )
{
	if (this != &other)
		this->m_type = other.getType();
	return (*this);
}
