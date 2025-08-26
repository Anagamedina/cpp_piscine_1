/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:49:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:11:46 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//------------------------------
// Constructor
//------------------------------
Cat::Cat() : Animal(), _brain(new Brain()) {
    std::cout << "[Constructor] Cat created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Cat::~Cat() {
    // Nota: Si estás usando new para _brain, recuerda descomentar delete para evitar memory leak
    // delete _brain;
    std::cout << "[Destructor] Cat destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain)) {
    std::cout << "[Copy Constructor] Cat copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);      // Copia los datos de la clase base
        *_brain = *other._brain;       // Copia el contenido del brain
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

