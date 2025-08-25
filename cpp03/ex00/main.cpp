/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/25 13:28:38 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    // =======================
    // Create ClapTraps
    // =======================
    std::cout << "=== Creating ClapTraps ===" << std::endl;
    ClapTrap Clap1("Clap1");
    ClapTrap Clap2("Clap2");
    // ClapTrap Clap3("Clap3"); // Optional third ClapTrap

    std::cout << std::endl;

    // =======================
    // Clap1 attacks Clap2
    // =======================
    std::cout << "=== Clap1 attacks Clap2 ===" << std::endl;
    Clap1.attack("Clap2");
    Clap1.printStatus();
    Clap2.printStatus();

    std::cout << std::endl;

    // =======================
    // Clap2 takes damage
    // =======================
    std::cout << "=== Clap2 takes damage ===" << std::endl;
    // Clap2.takeDamage(5);
    // Clap2.takeDamage(-1);
    Clap2.takeDamage(0);  // Test edge case
    Clap2.printStatus();

    std::cout << std::endl;

    // =======================
    // Clap2 repairs itself
    // =======================
    std::cout << "=== Clap2 repairs itself ===" << std::endl;
    Clap2.beRepaired(2147363648);  // Large repair amount test
    Clap2.printStatus();

    std::cout << std::endl;

    // =======================
    // Optional additional actions
    // =======================
    // Clap3.beRepaired(3);
    // Clap1.printStatus();
    // Clap2.printStatus();

    return 0;
}
