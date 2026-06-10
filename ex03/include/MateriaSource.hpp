/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 19:42:17 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/10 10:35:37 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

// ======================= MateriaSouce Class ================================

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*m_storage[4];

	public:
		// constructor / destructor
		MateriaSource( void );
		~MateriaSource();
		
		// member functions
		void		learnMateria( AMateria *m );
		AMateria	*createMateria( std::string const &type );
};
