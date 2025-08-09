/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:51:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/09 09:12:01 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//***************contructor por defecto **********/
Fixed::Fixed(){
  std::cout << "Constructor fail" << std::endl;
  this->_fixedPointedValue = 0;
}

/*
Fixed::Fixed() : _fixedPointedValue(0){
  std::cout << "Constructor fail" << std::endl;
} 
*/
//other sea otra instancia distinta de la actual sigue 
//siendo un objeto de tipo Fixed y por eso puedes leer/escribir 
//sus atributos privados 
//***************Contructor de copia***************/
Fixed::Fixed(const Fixed &other){
  std::cout << "Copy constructor called " << std::endl;
  this->_fixedPointedValue = other._fixedPointedValue;
  //*this = other;
}


//Fixed & → Devuelves una referencia a ti mismo (*this)
//Fixed & → Tipo de retorno: referencia al objeto actual
//Esta función devuelve una referencia al objeto actual
//Devuelve un alias al mismo objeto que está ejecutando la función
Fixed &Fixed::operator=(const Fixed &other){
  std::cout << "Copy assigment operator called " << std::endl;
  if (this != &other) //evita que sea el mismo 
    this->_fixedPointedValue = other.getRawBits();
  return *this; //devuelve el obj actual por referencia
  
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