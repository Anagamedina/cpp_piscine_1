/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:23:57 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/06 11:50:14 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
- Se crean automáticamente

- Se copian usando el constructor de copia y el operador =

- Y se destruyen automáticamente al final del main() */

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