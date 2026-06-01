/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:49:45 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 17:56:14 by yuknakas         ###   ########.fr       */
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
	~Dog();

	// member function
	void	makeSound( void ) const;
};
