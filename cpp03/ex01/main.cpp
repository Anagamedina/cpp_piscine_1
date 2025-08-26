/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/25 15:39:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// =======================
	// ClapTrap Section
	// =======================
	std::cout << "\n=== ClapTrap Battle ===" << std::endl;

	ClapTrap ironClap("IronClap");

	ironClap.attack("Moulinex");
	ironClap.printStatus();

	ironClap.takeDamage(3);
	ironClap.printStatus();

	ironClap.beRepaired(5);
	ironClap.printStatus();

	ironClap.attack("Moulinex Beta");
	ironClap.printStatus();

	ironClap.takeDamage(12);
	ironClap.printStatus();

	ironClap.attack("Moulinex 2.0");
	ironClap.printStatus();

	std::cout << std::endl;

	// =======================
	// ScavTrap Section
	// =======================
	std::cout << "=== ScavTrap Battle ===" << std::endl;

	ScavTrap darkScav("DarkScav");

	darkScav.takeDamage(30);
	darkScav.printStatus();

	darkScav.beRepaired(10);
	darkScav.printStatus();

	darkScav.attack("Moulinex");
	darkScav.printStatus();

	darkScav.takeDamage(50);
	darkScav.printStatus();

	darkScav.attack("Moulinex 2.0");
	darkScav.printStatus();

	darkScav.guardGate();
	darkScav.printStatus();

	std::cout << "\n=== Battle Finished ===" << std::endl;

	return 0;
}
