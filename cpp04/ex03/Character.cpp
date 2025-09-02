/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:09:55 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/30 18:09:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// =======================
// Helper functions (private-like)
// =======================

// Copy inventory deeply using clone()
void Character::copyInventory(const Character& other) {
	_name = other._name;
	for (int i = 0; i < 4; ++i) {
		if (other._inventory[i]) {
			_inventory[i] = other._inventory[i]->clone();  // deep copy
			std::cout << "[Character] Cloned materia from slot " << i << std::endl;
		} else {
			_inventory[i] = NULL;
		}
	}
}

// Delete all materias in the inventory
void Character::clearInventory() {
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i]) {
			std::cout << "[Character] Deleted materia in slot " << i
					  << " of type " << _inventory[i]->getType() << std::endl;
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

// =======================
// Constructors
// =======================

Character::Character() : ICharacter()
{
	this->_name = "Character_default";
	std::cout << "[Character] Default constructor called, name = " << _name << std::endl;
}

Character::Character(std::string const& name) : _name(name)
{
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	std::cout << "[Character] Param constructor called, name = " << _name << std::endl;
}

Character::Character(const Character& other)
{
	std::cout << "[Character] Copy constructor called" << std::endl;
	copyInventory(other);
}

// =======================
// Assignment operator
// =======================

Character& Character::operator=(const Character& other) {
	std::cout << "[Character] Assignment operator called" << std::endl;
	if (this != &other) {
		clearInventory();
		copyInventory(other); // << added this to actually copy
	}
	return *this;
}

// =======================
// Destructor
// =======================

Character::~Character() {
	std::cout << "[Character] Destructor called for " << _name << std::endl;
	clearInventory();
}

// =======================
// Public methods
// =======================

const std::string& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout << "[Character] " << _name
					  << " equipped materia of type " << m->getType()
					  << " in slot " << i << std::endl;
			return;
		}
	}
	std::cout << "[Character] " << _name << " cannot equip materia, inventory full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		std::cout << "[Character] " << _name
				  << " unequipped materia of type " << _inventory[idx]->getType()
				  << " from slot " << idx << std::endl;
		_inventory[idx] = NULL;
	} else {
		std::cout << "[Character] Unequip failed: invalid index or empty slot" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		std::cout << "[Character] " << _name
				  << " uses materia from slot " << idx
				  << " on " << target.getName() << std::endl;
		_inventory[idx]->use(target);
	} else {
		std::cout << "[Character] Use failed: invalid index or empty slot" << std::endl;
	}
}
