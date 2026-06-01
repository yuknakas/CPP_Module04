/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:42:29 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 17:57:54 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

// ============================= Cat Class ===================================

class Cat : virtual public Animal
{
public:
	// constructor/destructor
	Cat( void );
	~Cat();
	
	// member functions
	void	makeSound( void ) const;
};
