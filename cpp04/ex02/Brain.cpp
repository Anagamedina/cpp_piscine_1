/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:44:35 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:21:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//------------------------------
// Constructor
//------------------------------
Brain::Brain() {
    std::cout << "[Constructor] Brain created" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = "Empty";
    }
}

//------------------------------
// Copy Constructor
//------------------------------
Brain::Brain(const Brain& other) {
    std::cout << "[Copy Constructor] Brain copied" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];
    }
}

//------------------------------
// Copy Assignment Operator
//------------------------------
Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = other._ideas[i];
        }
    }
    std::cout << "[Assignment Operator] Brain assigned" << std::endl;
    return *this;
}

//------------------------------
// Destructor
//------------------------------
Brain::~Brain() {
    std::cout << "[Destructor] Brain destroyed" << std::endl;
}
