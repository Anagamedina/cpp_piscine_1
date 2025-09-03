/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:11:22 by anamedin          #+#    #+#             */
/*   Updated: 2025/09/03 18:48:37 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"



void overflowTest()
{
	std::cout << CYAN << "\n=== OVERFLOW TEST: Equip more materias than allowed ===\n" << RESET;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* Alice = new Character("Alice");

	std::cout << YELLOW << "\n-- Equipping materias --\n" << RESET;
	Alice->equip(src->createMateria("ice"));
	Alice->equip(src->createMateria("cure"));
	Alice->equip(src->createMateria("ice"));
	Alice->equip(src->createMateria("cure"));

	std::cout << RED << "\n-- Trying to equip one more materia (should fail if limit is 4) --\n" << RESET;
	AMateria* materiaExtra = src->createMateria("ice");
	Alice->equip(materiaExtra);

	delete materiaExtra;
	delete Alice;
	delete src;
}

int main()
{
	std::cout << CYAN << "=== TEST: Create MateriaSource and learn materias ===\n" << RESET;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << CYAN << "\n=== TEST: Create Character and equip materias ===\n" << RESET;
	ICharacter* Alice = new Character("Alice");
	AMateria* tmp;

	std::cout << YELLOW << "-- Equipping Ice --\n" << RESET;
	tmp = src->createMateria("ice");
	Alice->equip(tmp);

	std::cout << YELLOW << "-- Equipping Cure --\n" << RESET;
	tmp = src->createMateria("cure");
	Alice->equip(tmp);

	std::cout << CYAN << "\n=== TEST: Create another Character to use materias on ===\n" << RESET;
	ICharacter* bob = new Character("Bob");

	std::cout << GREEN << "-- Alice uses Ice on Bob --\n" << RESET;
	Alice->use(0, *bob);

	std::cout << GREEN << "-- Alice uses Cure on Bob --\n" << RESET;
	Alice->use(1, *bob);

	delete bob;
	delete Alice;
	delete src;
	//overflowTest();
	
	std::cout << MAGENTA << "\n=== ALL TESTS COMPLETED ===\n" << RESET;
}
