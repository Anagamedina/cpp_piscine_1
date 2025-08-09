/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:07:33 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/09 18:43:26 by anamedin         ###   ########.fr       */
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
    float toFloat(void) const;
    int   toInt(void) const;
    
    //friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

