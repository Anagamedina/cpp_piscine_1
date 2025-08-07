/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:22:37 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 16:39:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

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

void Harl::complain(std::string level)
{
  std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

  void (Harl::*ptr_functions[4])(void) = {
    &Harl::_debug,
    &Harl::_info,
    &Harl::_warning,
    &Harl::_error,
      };

  for(int i = 0; i < 4; i++){
    if (level == levels[i]){
      (this->*ptr_functions[i])();
      return ;
    }
  }
}




