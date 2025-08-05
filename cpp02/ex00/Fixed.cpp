/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:51:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/05 12:16:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//***************contructor por defecto **********/
Fixed::Fixed(){
  std::cout << "Default contructor called" << std::endl;
  this->_fixedPointedValue = 0;
}

/*
Fixed::Fixed() : _fixedPointedValue(0){
  std::cout << "Constructor fail" << std::endl;
} 
*/

//***************Contructor de copi***************/
Fixed::Fixed(const Fixed &other){
  std::cout << "Copy constructor called " << std::endl;
  //devueelve una referencia al objeto actual
  //es el objeto en sí.asigna al obj actual los valores del obj other
  *this = other;
}

/*[2 ALTERNATIVAS contructor de copia] */

/*Fixed::Fixed(const Fixed &other) : _fixedPointValue(other.getRawBits()) {
    std::cout << "Copy constructor called" << std::endl;
}
*/

/*Fixed::Fixed(const Fixed &other) {
    this->_fixedPointValue = other.getRawBits();
}
*/


//***************operador de asignacion*************/
//operator= devuelve una referencia al objeto asignado
////clase &referencia aun objeto tipo (fixed)
Fixed &Fixed::operator=(const Fixed &other){


}


//destructor
Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}


//getter
int getRawBits(void) const {
  std::cout << " " << std::endl;
  return (this->_fixedPointedValue);
}

void setRawBits(int const raw){
  std::cout
}



//setter
