/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:11 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 12:26:33 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Esta funcion crea un zombi , le pone


void randomChump(std::string name){
  if (name.empty())
    name = "unknown";
  Zombie z(name);  //se crea en el stack 
  z.announce();    //se anuncia                   

 // destructor se llama automáticamente aquí

}
