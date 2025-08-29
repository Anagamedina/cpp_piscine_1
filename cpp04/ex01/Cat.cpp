/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:49:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 13:05:09 by anamedin         ###   ########.fr       */
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
    delete _brain;
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
        Animal::operator=(other); 
        *_brain = *other._brain;      
    }
    std::cout << "[Assignment Operator] Cat assigned: " << _type << std::endl;
    return *this;
}

//------------------------------
// Member Function: makeSound
//------------------------------
void Cat::makeSound() const { 
    std::cout << "[CAT Sound] " << _type << " says: Meeeeow!!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
    return this->_brain->getIdea(index);
}

// Debug: ver dirección del Brain
void Cat::printBrainAddress() const {
    std::cout << "Brain address: " << this->_brain << std::endl;
}