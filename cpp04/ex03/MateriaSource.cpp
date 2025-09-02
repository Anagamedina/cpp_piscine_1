/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:12:26 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/30 18:12:28 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

// ==========================================
// Private Helpers
// ==========================================

// Deletes all Materias stored in the inventory.
void MateriaSource::clearInventory()
{
	for (int i = 0; i < 4; ++i)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

// Deep copies another MateriaSource's inventory.
void MateriaSource::copyInventory(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other._inventory[i])
		{
			_inventory[i] = other._inventory[i]->clone();
			std::cout << "[MateriaSource] Cloned materia from slot " << i << std::endl;
		}
		else
		{
			_inventory[i] = NULL;
		}
	}
}

// ==========================================
// Constructors / Destructor
// ==========================================

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;

	std::cout << "[MateriaSource] Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	copyInventory(other);
	std::cout << "[MateriaSource] Copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "[MateriaSource] Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		clearInventory();
		copyInventory(other);
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	clearInventory();
	std::cout << "[MateriaSource] Destructor called" << std::endl;
}

// ==========================================
// Core Methods
// ==========================================

// Stores a Materia pointer in the first empty slot.
// If inventory is full, the Materia is ignored.
void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "[MateriaSource] Cannot learn: NULL materia" << std::endl;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "[MateriaSource] Learned materia of type '"
					  << m->getType() << "' in slot " << i << std::endl;
			return;
		}
	}
	std::cout << "[MateriaSource] Inventory full, cannot learn new materia" << std::endl;
}

// Creates a new Materia by cloning one of the learned ones.
// Returns NULL if the requested type is not found.
AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			std::cout << "[MateriaSource] Created new materia of type '"
					  << type << "' from slot " << i << std::endl;
			return _inventory[i]->clone();
		}
	}
	std::cout << "[MateriaSource] Unknown materia type: '" << type << "'" << std::endl;
	return NULL;
}


