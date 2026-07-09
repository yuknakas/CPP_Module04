/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:46:17 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:29:40 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

// ======================= IMateriaSource Interface ==========================

class IMateriaSource
{
	public:
		// OCF not implemented as subject specifies implementation of interface
		// destructor
		virtual ~IMateriaSource() {};

		// member functions
		virtual void		learnMateria( AMateria *m ) = 0;
		virtual AMateria	*createMateria( std::string const &type ) = 0;
};
