/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:26:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"ClapTrap.hpp"
#include 	"ScavTrap.hpp"
#include 	"FragTrap.hpp"
#include 	"DiamondTrap.hpp"


int main(void)
{
  	ClapTrap 	ironClap("IronClap");
    ScavTrap 	darkScav("DarkScav");
    FragTrap 	megaFrag("MegaFrag");
	DiamondTrap diamond("Diamond");
	
	// =======================
	// ClapTrap Section
	// =======================
	std::cout << "\n========== ClapTrap Battle ==========" << std::endl;

	ironClap.attack(darkScav.getName());
	std::cout << std::endl;
	ironClap.printStatus();
	std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();
	// =======================
	// ScavTrap Section
	// =======================
	
	std::cout << "========== ScavTrap Battle ==========" << std::endl;
	darkScav.attack(megaFrag.getName());
	darkScav.printStatus();
	
	darkScav.guardGate();
	std::cout << std::endl;
	std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

	// =======================
	// FragTrap Section
	// =======================
	
	std::cout << "=========== FragTrap Battle ==========" << std::endl;

	megaFrag.attack(ironClap.getName());
	megaFrag.printStatus();

	megaFrag.highFiveGuys(); 
	std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

	// =======================
    // DiamondTrap attacks
    // =======================
    std::cout <<  "DiamondTrap " << diamond.getName() << " attacks " << megaFrag.getName() << std::endl;
	diamond.attack(megaFrag.getName());
	diamond.printStatus();
    diamond.whoAmI();
	
	std::cout << "\n=== Battle Finished ===" << std::endl;
	return 0;

}



