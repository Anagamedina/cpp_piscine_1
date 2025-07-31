/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:11 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 14:54:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << "Destructor ZOmbie" << _name << "****" << std::endl;
}

//this->_name;
//ZOmbie::_name;
void	Zombie::announce(void){
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	_name = name;
}
