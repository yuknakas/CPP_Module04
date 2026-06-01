/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 18:01:22 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 18:17:33 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

// ============================ WrongAnimal Class ============================

class WrongAnimal
{
protected:
	std::string	m_type;

public:
	// constructor/destructor
	WrongAnimal( void );
	virtual ~WrongAnimal();

	// getter
	std::string		getType( void ) const;
	
	// member functions
	void	makeSound( void ) const;
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
