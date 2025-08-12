/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:51:20 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 14:57:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FlagTrap default constructor called for " << getName() << std::endl;
}


//constructor overload

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap overload contructor called for" << getName() << std::endl;
}

//copy contructor

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor called for " << other.getName() << std::endl;
	//deep copy
}



//assigment operator overload

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other){
		ClapTrap::operator=(other);
	}
	std::cout << "operator called for " << getName() << std::endl;
	return *this;
}

//destructor
FragTrap::~FragTrap(){
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}

//memebr fucntions

void FragTrap::highFiveGuys(){
	std::cout << "FragTrap " << getName() << " Bye!🖐️ " << std::endl;
}

