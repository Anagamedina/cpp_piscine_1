/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:29:50 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    // =======================
    // Create ClapTraps
    // =======================
    std::cout << "=== Creating ClapTraps ===" << std::endl;
    ClapTrap    IronClap1("IronClap1");
    ClapTrap    IronClap2("IronClap2");

    std::cout << std::endl;

    // =======================
    // Clap1 attacks Clap2
    // =======================
    std::cout << "=== Clap1 attacks Clap2 ===" << std::endl;
    IronClap1.attack(IronClap2.getName());
    IronClap1.printStatus();
    std::cout << std::endl;
    std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

    // =======================
    // Clap2 takes damage
    // =======================
    std::cout << "=== Clap2 takes damage ===" << std::endl;
    IronClap2.takeDamage(0);
    IronClap2.printStatus();
    std::cout << std::endl;
    std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

    // =======================
    // Clap2 repairs itself
    // =======================
    std::cout << "=== Clap2 repairs itself ===" << std::endl;
    IronClap2.beRepaired(2147363648);  // Large repair amount test
    IronClap2.printStatus();
    std::cout << std::endl;

    std::cout << "\n=== Battle Finished ===" << std::endl;
    return 0;
}
