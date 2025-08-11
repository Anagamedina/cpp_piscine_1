/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:50:31 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/11 11:06:17 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}


//Int contructor 
Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointedValue = num << this->_fractionalbits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointedValue = roundf(num * (1 << this->_fractionalbits));
    //static_cast<int>(num * (1 << this->_fractionalbits));
}

//copy constructor 
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointedValue = other.getRawBits();
}
Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointedValue = other.getRawBits();
    return (*this);
} 

//destructor 
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


//metodos 
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointedValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointedValue = raw;
}


//member fucntions 
float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointedValue) / (1 << _fractionalbits);
}

int Fixed::toInt(void) const {
    return _fixedPointedValue >> _fractionalbits;
}


//overload comparison operators

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue > fixed.getRawBits();
}

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue < fixed.getRawBits();
}

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue >= fixed.getRawBits();
}

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue <= fixed.getRawBits();
}

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue == fixed.getRawBits();
}

bool Fixed::operator>(conts Fixed& fixed) const { 
    return this->_fixedPointedValue != fixed.getRawBits();
}

//overload arithmetic operator 

Fixed Fixed::operator+(const Fixed& fixed) const{
    return Fixed(this->toFloat() + fixed.toFloat());
}


Fixed Fixed::operator-(const Fixed& fixed) const{

}


Fixed Fixed::operator*(const Fixed& fixed) const{

}

Fixed Fixed::operator/(const Fixed& fixed) const{

}

//overload increment/decrement operators


Fixed& Fixed::operator++(){

}

Fixed Fixed::operator++(int){
}


Fixed& Fixed::operator--(){
}


Fixed Fixed::operator--(int){


}

//overload member functions max/min

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2){

}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2){
}


Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2){
}



const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2){
}
// Sobrecarga del operador << para imprimir el valor en float
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
