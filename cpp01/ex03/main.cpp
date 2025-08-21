/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:17:42 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:36:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main() {
    // ==========================
    // HumanA example (weapon on stack, always assigned)
    // ==========================
    {
        std::cout << "\n🧑‍🎤 ***** HumanA Example ***** 🧑‍🎤\n" << std::endl;

        Weapon club("crude spiked club"); // Weapon on the STACK
        HumanA bob("Bob", club);          // HumanA always has a weapon
        bob.attack();                     // Attack with initial weapon

        std::cout << "\n🔄 Changing weapon type...\n" << std::endl;
        club.setType("some other type of club"); // Change weapon type
        bob.attack();                             // Attack with updated weapon
    }

    std::cout << "\n==============================\n" << std::endl;

    // ==========================
    // HumanB example (weapon can be assigned later, via pointer)
    // ==========================
    {
        std::cout << "🧑‍🎤 ***** HumanB Example ***** 🧑‍🎤\n" << std::endl;

        Weapon club("crude spike club"); // Weapon on the STACK
        HumanB jim("Jim");               // HumanB may start without a weapon
        jim.attack();                    // No weapon yet

        std::cout << "\n🔧 Assigning weapon to HumanB...\n" << std::endl;
        jim.setWeapon(club);             // Assign weapon later
        jim.attack();                    // Attack with assigned weapon

        std::cout << "\n🔄 Changing weapon type...\n" << std::endl;
        club.setType("some other type of club"); // Change weapon type
        jim.attack();                             // Attack reflects updated weapon
    }

    std::cout << "\n✅ Demo completed successfully!\n" << std::endl;

    return 0;
}
