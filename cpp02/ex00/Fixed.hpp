/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:11:09 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/05 11:16:13 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP

#include <iostream>

//4 funciones que se conocen com olas funciones canonicas de una clase.
class Fixed{

  private:
    int               _fixedPointedValue;
    //esto desimula que usas 8  bits para la parte fraccionaria de numero 
    static const int  _fractionalbits = 8;


  public:
//1)constructor por defecto
    Fixed();
//2)constructtor de copia
    Fixed(const Fixed& other); //crea un objeto copiando a otro 
//3)operador de asignacion (=) para copiar el contenido de un objeto a otro 
    Fixed &operator=(const Fixed& other);
    

//4)destructor

    ~Fixed();

    //metodos
    int   getRawBits(void) const; //devulve el valor almacenado 
    void  setRawBits(int const raw); //te permite cambiarlo maualmente 


};

#endif
