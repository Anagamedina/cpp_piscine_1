/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:11:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:36:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
  _type = "Dog";
  std::cout << "Dog default...." << std::endl;
}

Dog::~Dog(){
  std::cout << "Dog destructor called for" << _type << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) { 
  std::cout << "DOg copy contructor called for" << _type << std::endl;

}

Dog& Dog::operator=(const Dog& other){
  if (this != &other) { 
    this->_type = other._type;
  }
  std::cout << "Dog assigment operator called for" << _type << std::endl;
  return *this;
}

void Dog::makeSound(void) const { 
  std::cout << _type << "wooof" << std::endl;
}
