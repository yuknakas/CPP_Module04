/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:36:14 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:38:59 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class AMateria;

// ========================= ICharacter Interface ===========================



class ICharacter
{
	public:
		// OCF not implemented as subject specifies implementation of interface
		// destrcutor
		virtual ~ICharacter() {};
		
		// member functions
		virtual std::string const	&getName( void ) const = 0;
		virtual void				equip( AMateria *m ) = 0;
		virtual void				unequipt( int idx ) = 0;
		virtual void				use( int idx, ICharacter &target ) = 0;
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
