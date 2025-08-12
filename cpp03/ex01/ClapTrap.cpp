/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:55:19 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 10:44:06 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << " Default constructor " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << " Name constructor " << _name << std::endl; 
}

//copy constructor

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor " << _name << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;\
	}
	return *this;
}


//getters

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



//metodos
void ClapTrap::attack(const std::string& target){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints == 0){
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << GRN << "ClapTrap " << _name << " is repaired by " << amount << " points!" << WHT << std::endl;
}

void ClapTrap::printStatus(void) const{

    std::cout << RED << "*****************************************" << YEL << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack Damage: " << _attackDamage << std::endl;
    std::cout << RED << "*****************************************" << WHT << std::endl;
}
