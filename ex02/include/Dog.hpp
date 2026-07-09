/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:49:45 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:22:10 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

// ========================== Dog Class =====================================

class Dog : virtual public AAnimal
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
