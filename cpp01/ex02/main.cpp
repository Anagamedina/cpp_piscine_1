/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:15:03 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 16:51:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){

  std::string		str = "HI THIS IS BRAIN";
  std::string		*stringPTR = &str;
  std::string&		stringREF = str;

  std::cout << std::endl;
  std::cout << "string str       = \"HI THIS IS BRAIN\"" << std::endl;
  std::cout << "string *stringPTR = &str " << std::endl;
  std::cout << "string& stringREF = str " << std::endl;
  std::cout << std::endl;

  std::cout << "The memory adress of the string variable:     " << &str << std::endl;
  std::cout << "The memory adress held by:     " << stringPTR << std::endl;
  std::cout << "The memory adress held by:     " << stringREF << std::endl;
  std::cout << std::endl;

  std::cout << "The value of the string variable:   " << str << std::endl;
  std::cout << "The value pointed to by:      " << *stringPTR << std::endl;
  std::cout << "The value pointed to by:     " << stringREF << std::endl;



  std::cout << std::endl;


  return (0);

}
