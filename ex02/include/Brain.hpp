/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:29:11 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:40:30 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

// =========================== Brain Class ===================================

class Brain
{
private:
	std::string	ideas[100];

public:
	// constructor/destructor
	Brain( void );
	Brain( const Brain &other );
	Brain	&operator=( const Brain &other );
	~Brain();

	// member functions
	void		setIdea( std::string idea, int id );
	std::string	getIdea( int id );
};

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
