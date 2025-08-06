/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:11:09 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/06 11:15:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP

#include <iostream>

//4 funciones que se conocen com olas funciones canonicas de una clase.
//1)constructor por defecto
//2)constructtor de copia
//3)operador de asignacion (=) para copiar el contenido de un objeto a otro 
//4)destructor
class Fixed{
  
  private:
    
    int               _fixedPointedValue;
    static const int  _fractionalbits = 8;

  public:
    Fixed();
    Fixed(const Fixed& other); 
    Fixed &operator=(const Fixed& other);
    
    ~Fixed();

    //metodos
    int   getRawBits(void) const; //devuelve el valor almacenado 
    void  setRawBits(int const raw); //te permite cambiarlo maualmente 
};

#endif
