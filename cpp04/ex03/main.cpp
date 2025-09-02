/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:11:22 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/30 18:11:25 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << "=== TEST: Create MateriaSource and learn materias ===\n" << std::endl;

	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n=== TEST: Create Character and equip materias ===\n" << std::endl;

	Character* alice = new Character("Alice");
	Character* bob = new Character("Bob");

	// Create materias from the source and equip them
	AMateria* ice1 = src->createMateria("ice");
	AMateria* cure1 = src->createMateria("cure");

	alice->equip(ice1);
	alice->equip(cure1);

	std::cout << "\n=== TEST: Alice uses materias on Bob ===\n" << std::endl;
	alice->use(0, *bob); // Ice
	alice->use(1, *bob); // Cure

	std::cout << "\n=== TEST: Copying Character ===\n" << std::endl;
	Character* aliceCopy = new Character(*alice);
	aliceCopy->use(0, *bob);
	aliceCopy->use(1, *bob);

	std::cout << "\n=== TEST: Unequip materias ===\n" << std::endl;
	alice->unequip(0);
	alice->use(0, *bob); // nothing should happen

	std::cout << "\n=== TEST: Cleanup ===\n" << std::endl;
	delete src;
	delete alice;
	delete bob;
	delete aliceCopy;

	return 0;
}


