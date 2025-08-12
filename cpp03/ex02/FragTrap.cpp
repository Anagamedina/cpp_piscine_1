/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:51:20 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 14:40:31 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "FlagTrap default constructor called for " << _name << std::endl;
}


//constructor overload

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
	_hitPoints = 100;
	_energyPoints =  50;
	_attackDamage = 20;
	std::cout << "FragTrap overload contructor called for" << _name << std::endl;
}

//copy contructor

FragTrap::FragTrap(const FragTrap& other) : FragTrap(other){
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}



//assigment operator overload

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "operator called for " << _name << std::endl;
	return *this;
}

//destructor
FragTrap::~FragTrap(){
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

//memebr fucntions

void FragTrap::attack(const std::string& target){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "FlagTrap " << _name << " is dead!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "FragTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

