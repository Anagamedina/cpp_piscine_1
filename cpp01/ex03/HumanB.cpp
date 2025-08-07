/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:40:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 10:02:19 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
  std::cout << " *****Constructor HumanB" << _name << "****:   " << std::endl;
}

HumanB::~HumanB()
{
  std::cout << "***Destructor" << _name << " **** : " << std::endl;
}

void HumanB::attack()
{
  if (_weaponB)
    std::cout << _name << " attacks with their" << _weaponB->getType() << std::endl;
  else
    std::cout << _name << "Hasn't weapon" << std::endl;
}

//una referencia a un objeto Weapon. 
//Esto significa que no se copia el objeto, 
//solo se accede al original.
void  HumanB::setWeapon(Weapon& newWeapon)
{
  _weaponB = &newWeapon;
}