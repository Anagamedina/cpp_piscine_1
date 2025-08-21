/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:40:26 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:31:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

// 🧑‍🎤 HumanB can start without a weapon and receive one later
class HumanB
{
  private:
    std::string _name;   // Name of the human
    Weapon*     _weaponB; // Pointer to a Weapon object (can be nullptr)

  public:
    // Constructor: initialize the human with a name, no weapon yet
    HumanB(std::string name);

    // Destructor
    ~HumanB();

    // Make the human attack with its weapon (if assigned)
    void attack();

    // Assign a weapon later (store the address of the Weapon)
    void setWeapon(Weapon& newWeapon);
};

#endif
