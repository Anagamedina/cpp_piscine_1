/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 10:40:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	
	ClapTrap ironClap("IronClap");
	ScavTrap darkScav("DarkScav");

	// =======================
	// ClapTrap Section
	// =======================
	std::cout << "\n======== ClapTrap Battle ========" << std::endl;

	ironClap.attack(darkScav.getName());
	ironClap.printStatus();

	ironClap.takeDamage(3);
	ironClap.printStatus();

	ironClap.beRepaired(5);
	ironClap.printStatus();

	std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

	std::cout << std::endl;

	// =======================
	// ScavTrap Section
	// =======================
	std::cout << "======== ScavTrap Battle ========" << std::endl;

	darkScav.attack(ironClap.getName());
	darkScav.printStatus();
	
	darkScav.takeDamage(30);
	darkScav.printStatus();

	darkScav.beRepaired(10);
	darkScav.printStatus();

	darkScav.guardGate();
	std::cout << "\n======== Battle Finished ========" << std::endl;

	return 0;
}
