/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:40:26 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 10:02:38 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
  private:
    std::string _name;
    Weapon      *_weaponB;

  public:

    HumanB(std::string name);
    ~HumanB();

    void  attack();
    void  setWeapon(Weapon& newWeapone); //<-- se guarda la dirección (&weapon)

};

#endif
