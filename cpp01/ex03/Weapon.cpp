/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/02 13:07:32 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

//contructor 
//implementas lo que realmente hace ese constructor
Weapon::Weapon(std::string type)
{
  //inicializar sus atributos privados
  setType(type);
std::cout << "***Contructor Weapon ***" << _type << "called:   " << std::endl;

}

//destructor 

Weapon::~Weapon()
{
  std::cout << "***Destructor Weapon ***" << _type << "called:   " << std::endl;

}


//metodos
//getter del tipo de arma 

const std::string& Weapon::getType() const
{
  return _type;

}


//setter del tipo de arma 
void Weapon::setType(std::string type)
{
 _type = type;

}



