/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:49:45 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:06:34by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates a Zombie on the HEAP and returns a pointer to it
Zombie* newZombie(std::string name)
{
    if (name.empty())  
        name = "unknown";

    Zombie* newZombiePtr = new Zombie(name);

    // IMPORTANT: The caller is responsible for deleting this Zombie 
    // (using 'delete') to avoid memory leaks
    return newZombiePtr;
}