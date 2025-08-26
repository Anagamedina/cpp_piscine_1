/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:51:20 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/25 16:02:48 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// =======================
// Constructors
// =======================
FragTrap::FragTrap() : ClapTrap("default"){
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap] ✅ Default constructor called for: " << getName() << std::endl;
}


FragTrap::FragTrap(const std::string& name): ClapTrap(name){
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap] 🆕 Overload constructor called for: " << getName() << std::endl;
}

// =======================
// Copy Constructor
// =======================

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "[FragTrap] 📋 Copy constructor called for: " << other.getName() << std::endl;
	// deep copy
}



// =======================
// Overload operator 
// =======================

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other){
		ClapTrap::operator=(other);
	}
	std::cout << "[FragTrap] 🔄 Operator= called for: " << getName() << std::endl;
	return *this;
}

// =======================
// Destructor
// =======================
FragTrap::~FragTrap(){
	std::cout << "[FragTrap] ❌ Destructor called for: " << getName() << std::endl;
}

// =======================
// Action Methods
// =======================

void FragTrap::highFiveGuys(){
	std::cout << "[FragTrap] 🙌 " << getName() << " says: High Five! 🖐️" << std::endl;
}
