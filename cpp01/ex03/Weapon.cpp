/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:35:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

// Constructor: initialize weapon type
Weapon::Weapon(std::string type)
{
    // Use setType() for consistency and maintainability
    setType(type);
    std::cout << "[🪓 Constructor] Weapon created: " 
              << _type << std::endl;
}

// Destructor
Weapon::~Weapon()
{
    std::cout << "[💀 Destructor] Weapon destroyed: " 
              << _type << std::endl;
}

// Get the weapon type (const reference, does not modify object)
const std::string& Weapon::getType() const
{
    return _type;
}

// Set a new type for the weapon
void Weapon::setType(std::string type)
{
    _type = type;
}




