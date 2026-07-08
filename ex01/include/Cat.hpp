/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:42:29 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 22:42:29 by yuknakas         ###   ########.fr       */
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
	Cat( const Cat &other );
	Cat	&operator=( const Cat &other );
	~Cat();
	
	// member functions
	void	makeSound( void ) const;
};
