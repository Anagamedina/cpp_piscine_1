/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:17:42 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 10:02:05 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
  {
    std::cout << "***** HumanA ***** " << std::endl;
    Weapon club = Weapon("crude spiked club"); // vida automática (stack).
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();


  }

    std::cout << std::endl;

  {
    std::cout << "***** HumanB ***** " << std::endl;
    Weapon club = Weapon("crude spike club");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other of club");
    jim.attack();

  }
  return (0);










}
