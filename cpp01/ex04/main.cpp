/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:16:53 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:45:57 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


// Replace all occurrences of s1 with s2 line by lin
void	replaceLines(std::ifstream &in, std::ofstream &out, const std::string &s1, const std::string &s2){
	std::string line; 
	while(std::getline(in, line))
	{
		size_t pos = 0; 
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		out << line << std::endl;
	}
}


int main(int argc, char  *argv[]){

	std::string		filename;
	std::string		s1;
	std::string		s2;
		

	if (argc != 4){
		std::cerr << "[Error] Usage: ./replace <filename> <string_to_find> <replacement_string>" << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty()){
		std::cerr << "[Error] String to find is empty!" << std::endl;
		return (1);
	}
	
	// Open input file
	std::ifstream inputFile(filename.c_str());
	if (!inputFile){
		std::cerr << "[Error] Could not open input file: " << filename << std::endl;
		return (1);
	}
	std::cout << "[Info] Input file opened: " << filename << std::endl;

	// Create output file with ".replace" suffix
	std::ofstream outFile((filename + ".replace").c_str()); 
	if (!outFile){
		std::cerr << "[Error] Could not create output file: " << filename + ".replace" << std::endl;
		return (1);
	}

	std::cout << "[Info] Output file created: " << filename + ".replace" << std::endl;

    // Perform replacement
	replaceLines(inputFile, outFile, s1, s2);
	
	inputFile.close();
	outFile.close();
	std::cout << "[Success] Replacement done. Output saved to: " << filename + ".replace" << std::endl;

	return (0);
}
