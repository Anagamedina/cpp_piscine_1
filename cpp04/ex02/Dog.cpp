/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:46:15 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:24:02 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//------------------------------
// Constructor
//------------------------------
Dog::Dog() : AAnimal(), _brain(new Brain()) {
    std::cout << "[Constructor] Dog created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Dog::~Dog() {
    delete _brain; // Liberar memoria para evitar memory leaks
    std::cout << "[Destructor] Dog destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Dog::Dog(const Dog& other) : AAnimal(other), _brain(new Brain(*other._brain)) { 
    std::cout << "[Copy Constructor] Dog copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {  
        AAnimal::operator=(other);    // Copia los datos de la clase base
        *_brain = *other._brain;      // Copia el contenido del Brain
    }
    std::cout << "[Assignment Operator] Dog assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void Dog::makeSound() const { 
    std::cout << "[Sound] " << _type << " says: Wooof!" << std::endl;
}

