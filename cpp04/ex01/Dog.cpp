/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:11:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/14 17:29:16 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) {
  std::cout << "Dog default...." << std::endl;
}

Dog::~Dog(){
  //delete _brain;
  std::cout << "Dog destructor called for" << _type << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) , _brain(new Brain(*other._brain)){ 
  std::cout << "DOg copy contructor called for" << _type << std::endl;

}

Dog& Dog::operator=(const Dog& other){
  if (this != &other) {  
    Animal::operator=(other);
    *_brain = *other._brain;
  }
  return *this;
}

void Dog::makeSound(void) const { 
  std::cout << _type << "wooof" << std::endl;
}
