/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:40:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:33:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor: initialize name, no weapon initially
HumanB::HumanB(std::string name) : _name(name), _weaponB(nullptr)
{
    std::cout << "[🧑‍🎤 Constructor] HumanB created: " 
              << _name << " (no weapon yet)" << std::endl;
}

// Destructor
HumanB::~HumanB()
{
    std::cout << "[💀 Destructor] HumanB destroyed: " << _name << std::endl;
}

// Attack function
void HumanB::attack()
{
    if (_weaponB)
        std::cout << _name << " attacks with their: " 
                  << _weaponB->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}

// Assign a weapon later (store the address of the Weapon)
void HumanB::setWeapon(Weapon& newWeapon)
{
    _weaponB = &newWeapon;
}
