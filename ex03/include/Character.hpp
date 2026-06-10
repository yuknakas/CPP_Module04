/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:24:57 by yuknakas          #+#    #+#             */
/*   Updated: 2026/06/06 19:41:32 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

// ============================== Character Class ============================

class Character : public ICharacter
{
	private:
		std::string			m_name;
		AMateria			*m_inventory[4];
		AMateria			*m_trash[10];
		
	public:
		// constructor/destructor
		Character( std::string const &name );
		~Character();
		
		// member functions from Interface
		std::string const	&getName( void ) const;
		void				equip( AMateria *m );
		void				unequipt( int idx );
		void				use( int idx, ICharacter &target );
		
};
