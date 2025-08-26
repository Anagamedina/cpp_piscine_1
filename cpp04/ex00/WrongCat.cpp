/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:53:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:00:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

//------------------------------
// Constructor
//------------------------------
WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "[Constructor] WrongCat created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
WrongCat::~WrongCat() {
    std::cout << "[Destructor] WrongCat destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "[Copy Constructor] WrongCat copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "[Assignment Operator] WrongCat assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void WrongCat::makeSound() const { 
    std::cout << "[Sound] " << _type << " says: Meeeeow!!" << std::endl;
}
