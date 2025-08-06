/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:51:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/06 11:41:31 by anamedin         ###   ########.fr       */
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

//***************Contructor de copia***************/
Fixed::Fixed(const Fixed &other){
  std::cout << "Copy constructor called " << std::endl;
  this->_fixedPointedValue = other._fixedPointedValue;
  //*this = other;
}


//Fixed & → Devuelves una referencia a ti mismo (*this)
//Fixed & → Tipo de retorno: referencia al objeto actual

Fixed &Fixed::operator=(const Fixed &other){
  std::cout << "Copy assigment operator called " << std::endl;
  if (this != &other) //evita que sea el mismo 
    this->_fixedPointedValue = other.getRawBits();
  return *this; //devuelve el obj actual 
  
  //_fixedPointedValue =  other.getRawBits();
  //setRawBits(other.getRawBits());
}

//destructor
Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}


//getter
int Fixed::getRawBits(void) const{
  std::cout << "getRawBits member function called " << std::endl;
  return (this->_fixedPointedValue);
}

void Fixed::setRawBits(int const raw){
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPointedValue = raw;
}



//setter






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