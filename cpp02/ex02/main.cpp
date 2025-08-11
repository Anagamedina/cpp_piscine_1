/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:53:46 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/11 11:07:06 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){

  Fixed a;
  Fixed const  b (Fixed( 5.05f) * Fixed( 2 ));

  std::cout  << a << std::endl;
  std::cout  << ++a << std::endl;
  std::cout <<  a << std::endl;
  std::cout <<  a++ << std::endl;
  
  std::cout <<  b << std::endl;
  
  std::cout << Fixed::max(a, b) << std::endl;



  return (0);

}
