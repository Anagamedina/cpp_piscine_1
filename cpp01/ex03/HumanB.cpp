/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:40:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/02 19:02:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//contructor

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
  std::cout << " *****Constructor HumanB" << _name << "****:   " << std::endl;
}



//destructor 

HumanB::~HumanB()
{
  std::cout << "***Destructor" << _name << " **** : " << std::endl;
}


//attackB
//

void HumanB::attack()
{
  //dependera si tiene arma o no 
  if (_weaponB)
    std::cout << _name << " attacks with their" << _weaponB->getType() << std::endl;
  else
    std::cout << _name << "Hasn't weapon" << std::endl;
}

//setweapon 

void  HumanB::setWeapon(Weapon& x, std::string)
{
  _weaponB = &x;

}
