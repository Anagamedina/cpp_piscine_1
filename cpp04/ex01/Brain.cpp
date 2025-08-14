/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:15:45 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/14 11:05:16 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = "Empty";
    }
}


Brain::Brain(const Brain& other) {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] =other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other)
    for(int i = 0; i < 100; i++){
        _ideas[i] = other._ideas[i];
    }
  return *this;
}

Brain::~Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

