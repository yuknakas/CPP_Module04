/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:32:50 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/08 23:21:42 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

#include <iostream>
#include <string>

// ============================== Animal Class ===============================

class AAnimal
{
protected:
	std::string	m_type;
	Brain*		m_brain;

public:
	// constructor/destructor
	AAnimal( void );
	AAnimal( const AAnimal &other );
	AAnimal	&operator=( const AAnimal &other );
	virtual ~AAnimal();

	// getter
	std::string		getType( void ) const;
	Brain*			getBrain( void ) const;

	// member functions
	virtual void	makeSound( void ) const = 0;
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
