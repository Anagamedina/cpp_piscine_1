/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:11:36 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 12:38:34 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//------------------------------
// Constructor
//------------------------------
Dog::Dog() : Animal(), _brain(new Brain()) {
    std::cout << "[Constructor] Dog created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Dog::~Dog() {
    delete _brain;
    std::cout << "[Destructor] Dog destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain)) { 
    std::cout << "[Copy Constructor] Dog copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {  
        Animal::operator=(other);   
        *_brain = *other._brain;    
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
