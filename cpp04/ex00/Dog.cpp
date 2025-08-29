/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:11:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 12:43:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//------------------------------
// Constructor
//------------------------------
Dog::Dog() {
    _type = "Dog";
    std::cout << "[Constructor] Dog created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Dog::~Dog() {
    std::cout << "[Destructor] Dog destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Dog::Dog(const Dog& other) : Animal(other) { 
    std::cout << "[Copy Constructor] Dog copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) { 
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] Dog assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void Dog::makeSound() const { 
    std::cout << "[Dog Sound] " << _type << " says: Wooof!" << std::endl;
}

