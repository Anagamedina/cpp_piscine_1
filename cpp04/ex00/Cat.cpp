/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:49:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 17:57:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//------------------------------
// Constructor
//------------------------------
Cat::Cat() {
    _type = "Cat";
    std::cout << "[Constructor] Cat created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Cat::~Cat() {
    std::cout << "[Destructor] Cat destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "[Copy Constructor] Cat copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] Cat assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void Cat::makeSound() const { 
    std::cout << "[Sound] " << _type << " says: Meeeeow!!" << std::endl;
}

