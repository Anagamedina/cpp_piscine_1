/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:50:31 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 17:59:32 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//------------------------------
// Constructor
//------------------------------
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "[Constructor] WrongAnimal created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
WrongAnimal::~WrongAnimal() {
    std::cout << "[Destructor] WrongAnimal destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
    std::cout << "[Copy Constructor] WrongAnimal copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] WrongAnimal assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void WrongAnimal::makeSound() const {
    std::cout << "[Sound] " << _type << " makes no sound." << std::endl;
}

//------------------------------
// Getter: getType
//------------------------------
std::string WrongAnimal::getType() const { 
    return _type;
}
