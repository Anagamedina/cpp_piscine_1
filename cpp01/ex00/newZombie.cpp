/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:49:45 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 12:20:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



//esta funcion recibe una cadena de texto como parametro(name)
//Devuelve un puntero a un objeto ZOmbie
//
//Estamos creando un objeto dinamicamente (en el heap) y como eso no tiene
//nombre fijo , necesitas devolver un puntero (zombie*) para podere usarlo
//luego fuera de esta funcion. 

Zombie *newZombie(std::string name)
{
  if (name.empty()) //devuelve true si la cadena esta vacia 
    name = "unknown";
  Zombie *newZombiePtr = new Zombie(name);
  //return (puntero de nuevo zombie)
  return (newZombiePtr);
}
