/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:06:37 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 13:07:35 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	  Zombie(std::string name);
	  ~Zombie();
	void announce(void); //esta funcion hara que se anuncie a si mismo 
};

Zombie* newZombie(std::string name);

  //esta funcion crea un zombie le asigna un nombre y lo retorna para que
  //puedas usarlo fuera del alcance de la funcion


void randomChump(std::string name);
  //esta funcion crea un zombie le asigna un nombre y hace que se anuncie 
  //indmediatamente 

#endif
