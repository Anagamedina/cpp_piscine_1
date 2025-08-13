/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:53:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 16:10:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
  _type = "WrongCat";
  std::cout << "WrongCat ...." << std::endl;
}

WrongCat::~WrongCat(){
  std::cout << "WrongCat..." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
  std::cout << " cat copy" << _type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
  if (this != &other){
    this->_type = other._type;
  }
  std::cout << " Cat operator called for" << _type << std::endl;
  return *this;
}

void WrongCat::makeSound(void) const { 
  std::cout << _type << "Meeeeow!!" << std::endl;
}