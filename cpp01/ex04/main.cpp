/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:16:53 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/04 11:04:53 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>



//abre el archivo test.txt lee cada linia y la imprime en la consola si el
//archico no se puede abrir se imprime un mesanje de error. 

/*if (inputFile.is_open()) {
		std::string	line;
	while (std::getline(inputFile, line)){
	  std::cout << line << std::endl;

	}*/

int main(int argc, char  *argv[]){

	std::string		filename;
	std::string		s1;
	std::string		s2;
		

	if (argc != 4){
		std::cout << " " << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.emty()){
		std::cerr << "Error: string to find is empty" << std::endl;
		return (1);
	}

	//abrimos el archivo source el que vamos a buscar 
	std::ifstream inputFile("filename.c_str());
	if (!inputFile){
		std::cerr << "Error: opening file" << filename << " :" << std::endl;
		return (1);
	}
//else ???
	std::cout << " " filename << "file is open " << std::endl;

	//crear el archivo destino 
	std::ofstream outFile(filename + ".replace").c_str()); 
	if (!outFile){
		std::cerr << " Error: file no create " << filename + ".replace " << ":" << std::endl;
		//porque cerramos
		outFile.close();
		return (1);
	}

	std::cout << " Output " << filename + ".replace" << std::endl;

	//llamar a la funcion de replace para que haga el algoritmo
	//inputFile.close();
	//outFile.close();
	//
	//std::cout << "Replace ok. output  saved to:  " << filname + ".replace" <<
	//std::endl

return (0);
}
