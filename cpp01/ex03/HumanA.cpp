/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:54:51 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/02 12:15:40 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : _name(name), _weaponA(w)
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


