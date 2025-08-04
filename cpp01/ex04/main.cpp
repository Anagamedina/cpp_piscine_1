/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:16:53 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/04 12:28:33 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>



//const porque no la vamos a modificar
void	replaceLines(std::ifstream &in, std::ofstream &out, const std::string &s1, const std::string &s2){
	std::string line; //varibale para guardar la linia
	while(std::getline(in, line))
	{
		size_t pos = 0; //posicion 
		//size_t find(const std::string& str, size_t pos = 0) const;
		//busca la palabra s1 dentro de lal linia empezando por pos
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			//borra la cantidad de caracteres que ocupa s1 empezando en pos
			line.erase(pos, s1.length());
			//string& insert(size_t pos, const std::string& str);
			//inserta s2 en el mismo lugar donde estaba s1
			line.insert(pos, s2);
			//Avanzamos pos para que no vuelva a buscar desde el mismo sitio y caiga en un bucle infinito.
			pos += s2.length();
		}
		//usamos el operador << para "enviar algo a una salida".
		out << line << std::endl; //escribir en el archivo de salida
	}
}


int main(int argc, char  *argv[]){

	std::string		filename;
	std::string		s1;
	std::string		s2;
		

	if (argc != 4){
		std::cout << "Error: uso incorrecto" << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty()){
		std::cerr << "Error: string to find is empty" << std::endl;
		return (1);
	}

	//std::ifstream inputFile("miarchivo.txt");
	//abrimos el archivo de entrada (el orginal) 
	std::ifstream inputFile(filename.c_str());
	if (!inputFile){
		std::cerr << "Error: opening file" << filename  << std::endl;
		return (1);
	}
	std::cout << "Input " << filename << "file is open " << std::endl;

	//std::ofstream miArchivo("ejemplo.txt");
	//crear el archivo destino , de salida con el mismo nombrre + ".replace"
	std::ofstream outFile((filename + ".replace").c_str()); 
	if (!outFile){
		std::cerr << " Error: file no create " << filename + ".replace " << ":" << std::endl;
		return (1);
	}

	std::cout << " Output " << filename + ".replace" << std::endl;

	//llamar a la funcion de replace para que haga el algoritmo
	replaceLines(inputFile, outFile, s1, s2);
	//Cerramos los archivos
	inputFile.close();
	outFile.close();
	std::cout << "Replace ok. output  saved to:  " << filename + ".replace" << std::endl;

	return (0);
}
