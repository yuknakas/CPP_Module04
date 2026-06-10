/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:19 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/06 20:24:47 by yuknakas         ###   ########.fr       */
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
		~Cure();
		
		// member functions
		AMateria	*clone( void ) const;
		void		use( ICharacter &target );

		// operator override
		Cure		&operator=( const Cure &other );
};
