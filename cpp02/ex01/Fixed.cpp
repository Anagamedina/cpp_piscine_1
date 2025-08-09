/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:50:31 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/09 13:33:12 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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

// Convierte el valor almacenado a float dividiendo por 2^8
float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointedValue) / (1 << _fractionalbits);
}

// Convierte el valor almacenado a int desplazando 8 bits a la derecha
int Fixed::toInt(void) const {
    return _fixedPointedValue >> _fractionalbits;
}

// Sobrecarga del operador << para imprimir el valor en float
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}