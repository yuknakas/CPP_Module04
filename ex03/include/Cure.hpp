/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:19 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:28:22 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

// ================================ Cure Class ===============================

class Cure : public AMateria
{
	public:
		// constructor / destructor
		Cure( void );
		Cure( const Cure &other );
		Cure	&operator=( const Cure &other );
		~Cure();
		
		// member functions
		AMateria	*clone( void ) const;
		void		use( ICharacter &target );
};
