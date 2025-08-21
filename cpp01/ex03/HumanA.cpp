/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:54:51 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:32:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor: initialize name and weapon reference
HumanA::HumanA(std::string name, Weapon& weapon) 
    : _name(name), _weaponA(weapon)
{
    std::cout << "[🧑‍🎤 Constructor] HumanA created: " 
              << _name << " with weapon: " 
              << _weaponA.getType() << std::endl;
}

// Destructor
HumanA::~HumanA()
{
    std::cout << "[💀 Destructor] HumanA destroyed: " << _name << std::endl;
}

// Attack function
void HumanA::attack()
{
    std::cout << _name << " attacks with: " << _weaponA.getType() << std::endl;
}

