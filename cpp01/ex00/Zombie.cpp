/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:12:50 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:14:33 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) {
    this->_name = name;
    std::cout << "[🧟 Constructor] Zombie created: " 
              << this->_name << std::endl;
}

// Destructor
Zombie::~Zombie() {
    std::cout << "[💀 Destructor] Zombie destroyed: " 
              << this->_name << std::endl;
}

// Member function: announce
void Zombie::announce(void) {
    std::cout << this->_name 
              << " says: BraiiiiiiinnnzzzZ..." << std::endl;
}
