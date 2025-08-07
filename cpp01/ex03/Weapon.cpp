/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 08:52:18 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
  //buena práctica si quieres reutilizar lógica o mantener el código más limpio
  //  _type = type _______o____setType
  setType(type);
  std::cout << "***Contructor Weapon ***" << _type << "called:   " << std::endl;

}
Weapon::~Weapon()
{
  std::cout << "***Destructor Weapon ***" << _type << "called:   " << std::endl;

}
//&Weapon--> Más eficiente (no copia)
//const ->> NO va a modificar el objeto
const std::string& Weapon::getType() const
{
  return _type;

}
void Weapon::setType(std::string type)
{
 _type = type;

}



