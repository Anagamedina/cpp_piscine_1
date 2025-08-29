/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:17:18 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:50:18 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// =======================
// Constructors
// =======================
ScavTrap::ScavTrap() : ClapTrap("default"){
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);

	std::cout << "ScavTrap default constructor called for " << getName() << std::endl;
}


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap overload contructor called for" << getName() << std::endl;
}

// =======================
// Copy Constructor
// ======================= 

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "ScavTRap copy constructor called for " << getName() << std::endl;
		
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
	std::cout << "operator called for " << _name << std::endl;
	return *this;
}

// =======================
// Destructor
// =======================
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

// =======================
// Action Methods
// =======================

void ScavTrap::attack(const std::string& target){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << MAG "ScavTrap " << _name << " attacks " << target  << WHT << std::endl;
}

void ScavTrap::guardGate(){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << CYN << "[ScavTrap] " << _name << " has entered Gate keeper mode ⚔️" << WHT << std::endl;
}
