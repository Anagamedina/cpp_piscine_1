/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:49:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:10:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
  _type = "Cat";
  std::cout << "Cat ...." << std::endl;
}

Cat::~Cat(){
  std::cout << "Cat..." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
  std::cout << " cat copy" << _type << std::endl;
}

Cat& Cat::operator=(const Cat& other){
  if (this != &other){
    this->_type = other._type;
  }
  std::cout << " Cat operator called for" << _type << std::endl;
  return *this;
}

void Cat::makeSound(void) const { 
  std::cout << _type << "Meeeeow!!" << std::endl;
}
