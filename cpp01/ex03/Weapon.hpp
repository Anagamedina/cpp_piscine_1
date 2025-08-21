/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:45:24 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:34:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

// 🪓 Weapon class represents a simple weapon with a type
class Weapon
{
  private:
    std::string _type; // The type/name of the weapon

  public:
    // Constructor: initialize the weapon with a type
    Weapon(std::string type);

    // Destructor
    ~Weapon();

    // Get the weapon type (returns a const reference, does not modify the object)
    const std::string& getType() const;

    // Set a new type for the weapon
    void setType(std::string type);
};

#endif

