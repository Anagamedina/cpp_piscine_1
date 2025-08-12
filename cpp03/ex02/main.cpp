/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:33:33 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 15:27:48 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(){

    ClapTrap	clap("Clap");
    ScavTrap	scav("Scav");
    FragTrap	frag("Frag");

    clap.attack("Scav");
    // scav.takeDamage();
    scav.attack("Clap");
//     clap.takeDamage(scav.getDamagePoints());
//     scav.attack("Frag");
//     frag.takeDamage(scav.getDamagePoints());
//     frag.attack("Scav");
//     scav.takeDamage(frag.getDamagePoints());
//     scav.attack("Clap");
//     clap.takeDamage(scav.getDamagePoints());
//     scav.attack("Frag");
//     frag.takeDamage(scav.getDamagePoints());
}
