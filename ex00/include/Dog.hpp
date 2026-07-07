/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:49:45 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/07 19:26:23 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

// ========================== Dog Class =====================================

class Dog : virtual public Animal
{
public:
	// constructor/destructor
	Dog( void );
	Dog( const Dog &other );
	Dog	&operator=( const Dog &other );
	virtual ~Dog();

	// member function
	void	makeSound( void ) const;
};
