/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:32:37 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:36:06 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		m_storage[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other )
{
	for (int i = 0; i < 4; i++)
		m_storage[i] = NULL;
	*this = other;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &other )
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other.m_storage[i])
				this->m_storage[i] = other.m_storage[i]->clone();
			else
				this->m_storage[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (m_storage[i])
			delete (m_storage[i]);
}

void		MateriaSource::learnMateria( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!m_storage[i])
		{
			m_storage[i] = m;
			std::cout << CYAN << "Materia <" << m->getType()
			<< "> learned" << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << "Error: Materia Source Full. Cannot Learn More Materias"
	<< RESET << std::endl;
	return ;
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (m_storage[i]->getType() == type)
			return (m_storage[i]->clone());
	}
	std::cout << RED << "Error: No Materia with Type <" << type << "> Found"
	<< RESET << std::endl;
	return (NULL);
}
