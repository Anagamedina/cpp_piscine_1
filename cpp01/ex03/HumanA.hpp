/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:56:39 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:31:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

// 🧑‍🎤 HumanA always has a weapon assigned via reference
class HumanA
{
    private:
        std::string _name;   // Name of the human
        Weapon&     _weaponA; // Reference to a Weapon object (cannot be null)

    public:
        // Constructor: initialize name and weapon reference
        HumanA(std::string name, Weapon& weapon);

        // Destructor
        ~HumanA();

        // Make the human attack with its weapon
        void attack();
};

#endif

