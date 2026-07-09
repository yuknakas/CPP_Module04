/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:32:30 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/09 09:34:10 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character( void )
:m_name("nobody")
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		m_trash[i] = NULL;
}

Character::Character( std::string const &name )
:m_name(name)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		m_trash[i] = NULL;
}

Character::Character( const Character &other )
{
	*this = other;
}

Character	&Character::operator=( const Character &other )
{
	if (this != &other)
	{
		this->m_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (other.m_inventory[i])
				this->m_inventory[i] = other.m_inventory[i]->clone();
			else
				this->m_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i])
			delete(m_inventory[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (m_trash[i])
			delete(m_trash[i]);
	}
}

std::string const	&Character::getName( void ) const
{
	return (m_name);
}

void				Character::equip( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			std::cout << YELLOW << this->getName() << " equipped " << m->getType()
			<< RESET <<std::endl;
			return ;
		}
	}
	std::cout << RED << "Error: Cannot equipt more than 4 elements at the same time"
	<< RESET << std::endl;
	return ;
}

void				Character::unequipt( int idx )
{
	if (!m_inventory[idx])
	{
		std::cout << RED << "Error: No equiptment in selected slot, cannot remove"
		<< RESET << std::endl;
		return ;
	}
	for (int i  = 0; i < 10; i++)
	{
		if (!m_trash[i])
		{
			m_trash[i] = m_inventory[idx];
			m_inventory[idx] = NULL;
			std::cout << YELLOW << this->getName() << " unequipted " << m_trash[i]->getType()
			<< RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << "Error: too many materias have been unequipted, no more storage"
	<< RESET << std::endl;
	return ;
}

void				Character::use( int idx, ICharacter &target )
{
	if (!m_inventory[idx])
	{
		std::cout << RED << "Error: No Materia equipted in slot " << idx
		<< RESET << std::endl;
		return ;
	}
	m_inventory[idx]->use( target );
	return ;
}
