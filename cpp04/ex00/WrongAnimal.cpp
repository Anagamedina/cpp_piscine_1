/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:50:31 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:52:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){

}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
  if (this != &other){
	this->_type = other._type;
  }
  std::cout << "WrongAnimal assigment operator called for" << _type << std::endl;
  return *this;
}


void WrongAnimal::makeSound()  const{
  std::cout << "Animal doesn't make any sound" << std::endl;
}

std::string WrongAnimal::getType(void) const { 
  return _type;
}
