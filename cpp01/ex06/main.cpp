/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:04:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 16:47:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
  
  Harl  objHarl;
  
  if (argc == 2)
    objHarl.complain(argv[1]);
  else
  {
    std::cerr << "Usage: ./harl <complain level>" << std::endl;
    std::cerr << "Only: 'info' , 'debug' , 'warning ',  'error' " << std::endl;
    return (1);
  }


  return (0);
}
