/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:49:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/14 17:29:31 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()) {
  std::cout << "Cat ...." << std::endl;
}

Cat::~Cat(){
 // delete _brain;
  std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain)){
  std::cout << " cat copy" << _type << std::endl;
}

Cat& Cat::operator=(const Cat& other){
  if (this != &other){
  Animal::operator=(other);
  *_brain = *other._brain;
  }
  return *this;
}

void Cat::makeSound(void) const { 
  std::cout << _type << "Meeeeow!!" << std::endl;
}
