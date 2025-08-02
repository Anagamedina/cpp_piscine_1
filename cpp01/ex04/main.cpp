/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:16:53 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/02 20:46:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>



//abre el archivo test.txt lee cada linia y la imprime en la consola si el
//archico no se puede abrir se imprime un mesanje de error. 

//myreplace
//
//

int main(){
  std::ifstream inputFile("test.txt");

  if (inputFile.is_open()) {
	std::string	line;
	while (std::getline(inputFile, line)){
	  std::cout << line << std::endl;

	}
  inputFile.close();
  }else {
	std::cerr << "No se puede abrrir el archivo " << std::endl;
	return (1);
  }
return (0);
}
