/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:28:04 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 10:28:11 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// =======================
// Constructors
// =======================
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name_("Default")
{
	setHitPoints(100);      // From FragTrap
	setEnergyPoints(50);    // From ScavTrap
	setAttackDamage(30);    // From FragTrap
	std::cout << GRN << "DiamondTrap default constructor called for "
			  << name_ << YEL << std::endl;

}


DiamondTrap::DiamondTrap(const std::string& name) :
ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name)
{
	setHitPoints(100);      // From FragTrap
	setEnergyPoints(50);    // From ScavTrap
	setAttackDamage(30);    // From FragTrap
	
	std::cout << GRN << "DiamondTrap constructor called for "
			  << name_ << YEL << std::endl;
}


// =======================
// Copy Constructor
// =======================
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name_(other.name_)
{
	std::cout << BLU << "DiamondTrap copy constructor called"
			  << YEL << std::endl;
}


// =======================
// Overload operator 
// =======================
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << MAG << "DiamondTrap assignment operator called" << YEL << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name_ = other.name_;
	}
	return *this;
}


// =======================
// Destructor
// =======================
DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap destructor called for "
			  << name_ << YEL << std::endl;
}



// =======================
// Action Methods
// =======================
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}



void DiamondTrap::whoAmI()
{
	std::cout << CYN
			  << "I am " << name_
			  << " and my ClapTrap name is " << ClapTrap::getName()
			  << YEL << std::endl;
}
