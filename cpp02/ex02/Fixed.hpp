/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:07:33 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/11 10:16:43 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
  
  private:
    
    int               _fixedPointedValue;
    static const int  _fractionalbits = 8; //8 bits 

  public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed &operator=(const Fixed& other);
    ~Fixed();
    

    //metodos
    int   getRawBits(void) const;  
    void  setRawBits(int const raw);
  
    //contructores 
    Fixed(const int num);
    Fixed(const float num);

    //member functions 
    
    float toFloat(void) const;
    int   toInt(void) const;


    //overload comparison operators

    bool  operator>(const Fixed& fixed) const;
    bool  operator<(const Fixed& fixed) const;
    bool  operator>=(const Fixed& fixed) const;
    bool  operator<=(const Fixed& fixed) const;
    bool  operator==(const Fixed& fixed) const;
    bool  operator!=(const Fixed& fixed) const;


//overload aritmetic operators

    Fixed  operator+(const Fixed& fixed) const;
    Fixed  operator-(const Fixed& fixed) const;
    Fixed  operator*(const Fixed& fixed) const;
    Fixed  operator/(const Fixed& fixed) const;

//overload increment/decrement

    Fixed& operator++(); //++p prefix
    Fixed operator++(int); //p++ postfix
    Fixed& operator--();
    Fixed operator--(int);






};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

