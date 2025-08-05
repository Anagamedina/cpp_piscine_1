/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:51:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/05 11:25:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//contructor por defecto 
Fixed::Fixed(){
  std::cout << "Default contructor called" << std::endl;
  this->_fixedPointedValue = 0;
}

/*
Fixed::Fixed() : _fixedPointedValue(0){
  std::cout << "Constructor fail" << std::endl;
} 
*/

//Contructor de copia 
Fixed::Fixed(const Fixed &othe)




//destructor
Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

