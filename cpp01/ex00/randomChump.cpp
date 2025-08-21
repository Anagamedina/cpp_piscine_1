/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:11 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:07:14by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void randomChump(std::string name) {
    if (name.empty())
        name = "unknown";

    // Create a Zombie object on the stack
    Zombie z(name);
    z.announce();

    // When this function ends, the Zombie is automatically destroyed
    // because it was created on the stack (automatic storage)
}