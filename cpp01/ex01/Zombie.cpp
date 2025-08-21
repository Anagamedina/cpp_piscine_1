/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:11 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:25:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie() {}

// Destructor
Zombie::~Zombie() {
    std::cout << "[💀 Destructor] Zombie destroyed: " 
              << _name << std::endl;
}

// Member function: announce
// Makes the zombie announce itself
void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Member function: setName
// Assigns a name to the zombie
void Zombie::setName(std::string name) {
    _name = name;
}

