/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:23:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/05 11:19:34 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/*crear una clase que tenga las cuatro funciones canónicas de C++*/
/*En C++, la notación de punto fijo se utiliza para representar números
 * decimales con una cantidad fija de dígitos a la derecha del punto decimal.
 * Esto se logra utilizando tipos de datos como float o double y controlando 
 * la salida con funciones como setprecision y fixed de la biblioteca <iomanip>>. */

/*#include <iostream>
#include <iomanip>

int main() {
    double num = 3.1415926535;
    std::cout << std::fixed << std::setprecision(4) << num << std::endl; // Salida: 3.1416
    return 0;
}*/

int main(){

  Fixed a;
  Fixed b(a);
  Fixed c;

  c = b;


  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;
  return (0);
}
