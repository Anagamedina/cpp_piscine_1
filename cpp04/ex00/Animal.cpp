/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:47:34 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 11:21:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//------------------------------
// Constructor
//------------------------------
Animal::Animal() : _type("Animal") {
    std::cout << "[Constructor] Animal created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Animal::~Animal() {
    std::cout << "[Destructor] Animal destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Animal::Animal(const Animal& other) : _type(other._type) {
    std::cout << "[Copy Constructor] Animal copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] Animal assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void Animal::makeSound() const {
    std::cout << "[Sound] " << _type << " makes no sound." << std::endl;
}

//------------------------------
// Getter: getType
//------------------------------
std::string Animal::getType() const {
    return _type;
}


