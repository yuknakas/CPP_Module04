/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:51:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/06 20:22:24 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

// ================================ Ice Class ================================

class Ice : public AMateria
{
	public:
		// constructor / destructor
		Ice( void );
		Ice( const Ice &other );
		~Ice();
		
		// member functions
		AMateria	*clone( void ) const;
		void		use( ICharacter &target );

		// operator override
		Ice			&operator=( const Ice &other );
};
