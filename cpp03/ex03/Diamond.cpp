/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamond.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:28:04 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/25 17:28:49 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name_("Default")
{
	hitPoints_ = 100;      // From FragTrap
	attackDamage_ = 30;    // From FragTrap
	energyPoints_ = 50;    // From ScavTrap
	std::cout << GREEN << "DiamondTrap default constructor called for "
			  << name_ << RESET << std::endl;

}


DiamondTrap::DiamondTrap(const std::string& name) :
ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name)
{
	hitPoints_ = 100;      // From FragTrap
	attackDamage_ = 30;    // From FragTrap
	energyPoints_ = 50;    // From ScavTrap
	std::cout << GREEN << "DiamondTrap constructor called for "
			  << name_ << RESET << std::endl;
}



DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name_(other.name_)
{
	std::cout << BLUE << "DiamondTrap copy constructor called"
			  << RESET << std::endl;
}



DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << MAGENTA << "DiamondTrap assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name_ = other.name_;
	}
	return *this;
}



DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap destructor called for "
			  << name_ << RESET << std::endl;
}



void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}



void DiamondTrap::whoAmI()
{
	std::cout << CYAN
			  << "I am " << name_
			  << " and my ClapTrap name is " << ClapTrap::name_
			  << RESET << std::endl;
}
