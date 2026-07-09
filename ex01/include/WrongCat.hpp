/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:10:03 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:27:28 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

// =========================== WrongCat Class ================================

class WrongCat : virtual public WrongAnimal
{
public:
	// constructor/destructor
	WrongCat( void );
	WrongCat( const WrongCat &other );
	WrongCat	&operator=( const WrongCat &other );
	virtual ~WrongCat();
	
	// member functions
	void	makeSound( void ) const;
};
