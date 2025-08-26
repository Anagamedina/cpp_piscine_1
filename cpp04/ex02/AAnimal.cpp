/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:42:55 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:20:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//------------------------------
// Constructor
//------------------------------
AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "[Constructor] AAnimal created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
AAnimal::~AAnimal() {
    std::cout << "[Destructor] AAnimal destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
AAnimal::AAnimal(const AAnimal& other) : _type(other._type) {
    std::cout << "[Copy Constructor] AAnimal copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] AAnimal assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void AAnimal::makeSound() const {
    std::cout << "[Sound] " << _type << " makes no sound." << std::endl;
}

//------------------------------
// Getter: getType
//------------------------------
std::string AAnimal::getType() const {
    return _type;
}

