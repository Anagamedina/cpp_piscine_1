/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:55:19 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:58:34 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// =======================
// Constructors
// =======================
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "[ClapTrap] Default constructor called: " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "[ClapTrap] Constructor called: " << _name << std::endl; 
}

// =======================
// Copy Constructor
// =======================
ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "[ClapTrap] Copy constructor called: " << _name << std::endl;
	*this = other;
}

// =======================
// Overload operator 
// =======================

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;\
	}
	return *this;
}


// =======================
// Destructor
// =======================
ClapTrap::~ClapTrap(){
	std::cout << "[ClapTrap] Destructor called: " << _name << std::endl;
}


// =======================
// Setters Methods
// =======================
 void ClapTrap::setName(const std::string& name) {
		_name = name;
 }

 void ClapTrap::setHitPoints(int hp) {
		if (hp < 0)
			_hitPoints = 0;
		else
			_hitPoints = hp;
 }

 void ClapTrap::setEnergyPoints(int ep) {
		if (ep < 0)
			_energyPoints = 0;
		else
			_energyPoints = ep;
 }

 void 	ClapTrap::setAttackDamage(int ad) {
		if (ad < 0)
			_attackDamage = 0;
		else
			_attackDamage = ad;
 }

// =======================
// Getters Methods
// =======================

std::string ClapTrap::getName(void) const{
	return _name;
}

unsigned int ClapTrap::getHitPoints(void) const{
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const{
	return _energyPoints;
}

unsigned int ClapTrap::getDamagePoints(void) const{
	return _attackDamage;
}

// =======================
// Action Methods
// =======================
void ClapTrap::attack(const std::string& target){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout <<  "[ClapTrap] " << _name << " cannot attack, it is dead!" << std::endl;
		return;
	}
	
	_energyPoints--;
	std::cout << MAG "[ClapTrap] " << _name << " attacks " << target << WHT << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints == 0){
		std::cout << "[ClapTrap] " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << MAG "[ClapTrap] " << _name << " takes " << amount  << WHT << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "[ClapTrap] " << _name << " cannot be repaired, it is dead!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout  << MAG "[ClapTrap] " << _name << " repaired by " << amount 
			  << " points! Current HP: " << _hitPoints 
			  << ", Energy left: " << _energyPoints  << WHT << std::endl;
}

// =======================
// Utils
// =======================
void ClapTrap::printStatus(void) const{
	std::cout << RED << "********** STATUS **********" << YEL << std::endl;
	std::cout << "[ClapTrap] Name: " << _name << std::endl;
	std::cout << "[ClapTrap] Hit Points: " << _hitPoints << std::endl;
	std::cout << "[ClapTrap] Energy Points: " << _energyPoints << std::endl;
	std::cout << "[ClapTrap] Attack Damage: " << _attackDamage << std::endl;
	std::cout << RED << "****************************" << WHT << std::endl;
}

