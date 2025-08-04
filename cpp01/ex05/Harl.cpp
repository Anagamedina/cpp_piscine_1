/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:22:37 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/04 17:10:17 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//void Harl::_debug
//void (Harl::*)();
//void (Harl::*functions[4]());
//functions[0] = &Harl::_debug;
//functions[1] = &Harl::_info;
//functions[2] = &Harl::_warning;
//functions[3] = &Harl::_error;
//
//std::string levels[4] = { "DEBUG" "INFO" "WARNING" "ERROR" };
//
//Constructor y destructor
Harl::Harl(){}
Harl::~Harl(){}

//funciones privadas 


void Harl::_debug(void){
  std::cout << "[ DEBUG ] " << std::endl;
  std::cout << "I love having extra bacon on my burguer. " << std::endl;
}

void Harl::_info(void){

  std::cout << "[ INFO ] " << std::endl;
  std::cout << "Adding extra bacon costs more money. " << std::endl;
}

void Harl::_warning(void){
  std::cout << "[ WARNING ] " << std::endl;
  std::cout << "I think I deserve some free bacon  " << std::endl;

}

void Harl::_error(void){
  std::cout << "[ ERROR ] " << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager " << std::endl;

}

//complain con punteros a funiones miembro


void Harl::complain(std::string level)
{
  //arrays de levels
  std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

  //array de punteros a funciones miembro
  void (Harl::*ptr_functions[4])(void) = {
    &Harl::_debug,
    &Harl::_info,
    &Harl::_warning,
    &Harl::_error,
      };

  //buscar el nivel y llaar a la funcion correspondiente
  for(int i = 0; i < 4; i++){
    if (level == levels[i]){
      (this->*ptr_functions[i])();
      return ;
    }
  }

  std::cout << " ok" <<std::endl;
}




