/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:01:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/25 13:45:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <limits>

int main(){

  //  declare object
  PhoneBook  book(8);

  //  init object
  //contact = ;

  contact.set_name("Ana");
  contact.set_phone("123456");
  std::cout << "Nombre: " << contact.get_name() << std::endl;
  std::cout << "Telefono: " << contact.get_phone() << std::endl;


  //int valor = contact.metodo2();
  return (0);
}


