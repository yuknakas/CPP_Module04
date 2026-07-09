/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:42:29 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:40:39 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

// ============================= Cat Class ===================================

class Cat : virtual public AAnimal
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
