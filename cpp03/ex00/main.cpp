/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:51:07 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/11 16:36:10 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap Clap1("Clap1");
    ClapTrap Clap2("Clap2");
    // ClapTrap Clap3("Clap3");

    Clap1.attack("Clap2");
    Clap1.printStatus();

    // Clap2.takeDamage(5);
    // Clap2.takeDamage(-1);
    Clap2.takeDamage(0);
    Clap2.printStatus();

    Clap2.beRepaired(2147363648);
    Clap2.printStatus();

    // Clap3.beRepaired(3);
    // Clap1.printStatus();
    // Clap2.printStatus();
}
