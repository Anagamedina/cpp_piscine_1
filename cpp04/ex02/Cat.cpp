/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:45:23 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:23:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//------------------------------
// Constructor
//------------------------------
Cat::Cat() : AAnimal(), _brain(new Brain()) {
    std::cout << "[Constructor] Cat created: " << _type << std::endl;
}

//------------------------------
// Destructor
//------------------------------
Cat::~Cat() {
    delete _brain; // Liberar memoria para evitar memory leak
    std::cout << "[Destructor] Cat destroyed: " << _type << std::endl;
}

//------------------------------
// Copy Constructor
//------------------------------
Cat::Cat(const Cat& other) : AAnimal(other), _brain(new Brain(*other._brain)) {
    std::cout << "[Copy Constructor] Cat copied: " << _type << std::endl;
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        AAnimal::operator=(other);      // Copia la parte base
        *_brain = *other._brain;        // Copia el contenido de Brain
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
