/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:47:34 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:16:01 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){

}

Animal::~Animal(){

}

Animal::Animal(const Animal& other) : _type(other._type){

}

Animal& Animal::operator=(const Animal& other){
  if (this != &other){
	this->_type = other._type;
  }
  std::cout << "Animal assigment operator called for " << _type << std::endl;
  return *this;
}


void Animal::makeSound()  const{
  std::cout << "Animal doesn't make any sound" << std::endl;
}

std::string Animal::getType(void) const { 
  return _type;
}

