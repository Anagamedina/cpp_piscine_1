/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:49:45 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 11:35:26 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
  if (name.empty())
    name = "unknown"
  Zombie *newZombiePtr = new Zombie(name);
  //return (puntero de nuevo zombie)
}
