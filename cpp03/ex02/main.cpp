/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 09:39:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){

  	ClapTrap 	ironClap("IronClap");
    ScavTrap 	darkScav("DarkScav");
    FragTrap 	megaFrag("MegaFrag");
	
	// =======================
	// ClapTrap Section
	// =======================
	std::cout << "\n========== ClapTrap Battle ==========" << std::endl;

	ironClap.attack(darkScav.getName());
	std::cout << std::endl;
	ironClap.printStatus();

	ironClap.takeDamage(3);
	ironClap.printStatus();

	ironClap.beRepaired(5);
	ironClap.printStatus();
	std::cout << std::endl;

	// =======================
	// ScavTrap Section
	// =======================
	
	std::cout << "========== ScavTrap Battle ==========" << std::endl;
	darkScav.attack(megaFrag.getName());
	darkScav.printStatus();
	
	darkScav.takeDamage(30);
	darkScav.printStatus();

	darkScav.beRepaired(10);
	darkScav.printStatus();

	darkScav.guardGate();
	darkScav.printStatus();

	std::cout << std::endl;

	// =======================
	// FragTrap Section
	// =======================
	
	std::cout << "=========== FragTrap Battle ==========" << std::endl;

	megaFrag.attack(ironClap.getName());
	megaFrag.printStatus();

	megaFrag.takeDamage(40);
	megaFrag.printStatus();

	megaFrag.beRepaired(20);
	megaFrag.printStatus();

	megaFrag.highFiveGuys(); 
	megaFrag.printStatus();

	std::cout << "\n=== Battle Finished ===" << std::endl;
	return 0;

}

