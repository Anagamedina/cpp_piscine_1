/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:34:35 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:19:28 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define DEFAULT "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

int main(void) {
    //------------------------------
    // Single Animal Objects
    //------------------------------
    std::cout << GRN << "=== Single Animal Objects ===" << WHT << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << BLU << "[Type] j is a " << j->getType() << WHT << std::endl;
    std::cout << BLU << "[Type] i is a " << i->getType() << WHT << std::endl;

    std::cout << MAG << "[Sound] i makes sound: " << WHT;
    i->makeSound();

    std::cout << MAG << "[Sound] j makes sound: " << WHT;
    j->makeSound();

    delete j;
    delete i;
	std::cin.get();
	//------------------------------
	// Array of Animals
    //------------------------------
    std::cout << YEL << "\n=== Array of Animals Objects ===" << WHT << std::endl;
    Animal* animal_arr[4];

    // Create animals in array
    for (int i = 0; i < 4; i++) {
        if (i % 2 == 0) {
            animal_arr[i] = new Dog();
            std::cout << CYN << "[Array] Created Dog at index " << i << WHT << std::endl;
        } else {
            animal_arr[i] = new Cat();
            std::cout << CYN << "[Array] Created Cat at index " << i << WHT<< std::endl;
        }
    }

    std::cout << MAG << "\n[Sound] All animals in array make sound:" << WHT << std::endl;
    for (int i = 0; i < 4; i++) {
        animal_arr[i]->makeSound();
    }

	std::cin.get();
	//------------------------------
	// Cleanup
	//------------------------------
	std::cout << RED << CYN
			  << "\n[Cleanup] Deleting all animals in array:"
			  << CYN << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animal_arr[i];
		std::cout << RED << "[Cleanup] Deleted animal at index " << i << CYN << std::endl;
	}

	std::cin.get(); // Pausa
	//------------------------------
	//------------------------------
    // Shallow / Deep Copy Test
    //------------------------------
    std::cout << GRN << "\n=== Shallow / Deep Copy Test ===" << WHT << std::endl;
    Cat a;
    std::cout << BLU << "[Original] Cat a created" << YEL << std::endl;

    Cat b = a; // Copy constructor
    std::cout << BLU << "[Copy] Cat b copied from a" << YEL << std::endl;

    std::cout << MAG << "[Test] Making sounds to verify copies:" << YEL << std::endl;
    a.makeSound();
    b.makeSound();

    std::cout << GRN << "==== End of Program ====" << YEL << std::endl;

    return 0;
}

