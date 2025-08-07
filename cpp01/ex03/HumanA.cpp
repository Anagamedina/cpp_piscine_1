/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:54:51 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 10:10:13 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weaponA(weapon)
{
  std::cout << "***Contructor HumanA ***" << _name << "****:  " << std::endl;
}

HumanA::~HumanA()
{
  std::cout << "***Destructor" << _name << "***" << std::endl;
}

void  HumanA::attack()
{
  std::cout << _name << "attacks with:   " << _weaponA.getType() << std::endl;
}


