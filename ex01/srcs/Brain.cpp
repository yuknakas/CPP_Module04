/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:31:07 by yuknakas          #+#    #+#             */
/*   Updated: 2026/05/31 20:10:00 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain( void )
{	
	std::cout << CYAN << "Brain CONSTRUCTOR Called" << RESET << std::endl;
}

Brain::~Brain()
{
	std::cout << CYAN << "Brain DESTRUCTOR Called" << RESET << std::endl;
}
