/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:17:18 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:57:19 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// =======================
// Constructors
// =======================
 
ScavTrap::ScavTrap() : ClapTrap("default"){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "[ScavTrap] Default constructor called → Name: " << _name << std::endl;
}


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints =  50;
	_attackDamage = 20;
	std::cout << "[ScavTrap] Constructor (with name) called → Name: " << _name << std::endl;
}

// =======================
// Copy Constructor
// ======================= 

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "[ScavTrap] Copy constructor called → Copying from: " << other._name << std::endl;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

// =======================
// Overload operator 
// =======================

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "[ScavTrap] Assignment operator called → Now equals: " << _name << std::endl;
	return *this;
}

// =======================
// Destructor
// =======================
ScavTrap::~ScavTrap(){
}

// =======================
// Action Methods ScavTrap
// =======================

void ScavTrap::attack(const std::string& target){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "[ScavTrap] " << _name << " cannot attack (dead or no energy)!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << MAG "[ScavTrap] " << _name << " attacks " << target 
	          << " → Damage: " << _attackDamage 
	          << " | Energy left: " << _energyPoints << WHT <<  std::endl;
}

void ScavTrap::guardGate(){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "[ScavTrap] " << _name << " cannot enter Gate keeper mode (dead or no energy)!" << std::endl;
		return;
	}
	std::cout << CYN << "[ScavTrap] " << _name << " has entered Gate keeper mode ⚔️" << WHT << std::endl;

}
