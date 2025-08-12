/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 12:17:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

    ClapTrap	clap("Clap");
    ScavTrap	scav("Scav");
    ScavTrap	frag("Frag");

    std::cout << std::endl;
    std::cout << "ClapTrap " << clap.getName() << " attacks " << scav.getName() << std::endl;
    clap.attack(scav.getName());
    std::cout << std::endl;
    std::cout << "ScavTrap " << scav.getName() << " attacks " << frag.getName() << std::endl;
    scav.attack(frag.getName());
    std::cout << std::endl;
    std::cout << "FragTrap " << frag.getName() << " attacks " << clap.getName() << std::endl;
    frag.attack(clap.getName());

}
