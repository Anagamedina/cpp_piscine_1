/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:12:50 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 13:13:16 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//contructor

Zombie::Zombie(std::string name){
  this->_name = name;

  std::cout << "Contructor zombie" << this->_name << "***" << std::endl;
}


Zombie::~Zombie(){
  std::cout << "Destructor zombie " << this->_name <<  "***" << std::endl;
}

void Zombie::announce(void){
  std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;

}
