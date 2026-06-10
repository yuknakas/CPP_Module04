/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:17:53 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/10 10:57:50 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

// =========================== AMateria Abstract Class =======================

class AMateria
{
	protected:
		std::string	m_type;

	public:
		// constructor and destructor
		AMateria( std::string const &type );
		AMateria( const AMateria &other );
		virtual ~AMateria();
		
		// getter
		std::string const	&getType( void ) const;

		// member functions
		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter &target ) = 0;

		// operator override
		AMateria			&operator=( const AMateria &other );
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
