/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:06:37 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:15:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

// 🧟 The Zombie class represents a simple zombie object.
// Each zombie has a name and can "announce" itself.
class Zombie
{
  private:
    std::string _name;   // Zombie's name (private attribute)

  public:
    Zombie(std::string name); // Constructor: initializes the zombie with a name
    ~Zombie();                // Destructor: called when the zombie is destroyed

    void announce(void);      // Makes the zombie announce itself
};

// ===========================
// Utility functions
// ===========================

// Creates a Zombie on the HEAP and returns a pointer to it.
// The caller is responsible for deleting it later (to avoid memory leaks).
Zombie* newZombie(std::string name);

// Creates a Zombie on the STACK, gives it a name,
// and makes it announce itself immediately.
// The zombie is destroyed automatically when the function ends.
void randomChump(std::string name);

#endif

