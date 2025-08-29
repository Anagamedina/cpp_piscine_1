/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:01:38 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 13:09:19 by anamedin         ###   ########.fr       */
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

    std::cout << BLU << "[Type] j is a " << j->getType() << YEL << std::endl;
    std::cout << BLU << "[Type] i is a " << i->getType() << YEL << std::endl;

    std::cout << MAG << "[Sound] i makes sound: " << YEL;
    i->makeSound();

    std::cout << MAG << "[Sound] j makes sound: " << YEL;
    j->makeSound();

    std::cout << WHT "\n--- Press ENTER to continue ---";
	std::cin.get();

    delete j;
    delete i;

	//------------------------------
	// Array of Animals
    //------------------------------
    std::cout << GRN << "\n=== Array of Animals Objects ===" << WHT << std::endl;
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
    std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();
    std::cout << GRN << "\n[Sound] All animals in array make sound:" << YEL << std::endl;
    for (int i = 0; i < 4; i++) {
        animal_arr[i]->makeSound();
    }

	//------------------------------
	// Cleanup
	//------------------------------
	std::cout << GRN "\n[Cleanup] Deleting all animals in array:"
			  << WHT << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animal_arr[i];
		std::cout << CYN << "[Cleanup] Deleted animal at index " << i << WHT << std::endl;
	}

	std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();
	//------------------------------
	//------------------------------
    // Shallow / Deep Copy Test
    //------------------------------
    std::cout << GRN << "\n=== Deep Copy Test ===" << WHT << std::endl;\
    
    Cat     cat1;
    //std::cout << WHT << "[Original] Cat a created" << WHT << std::endl;
    cat1.setIdea(0, "Catch a mouse");
    cat1.setIdea(1, "Take a nap");

    std::cout << "Cat1 Idea[0]: " << cat1.getIdea(0) << std::endl;
    std::cout << "Cat1 Idea[1]: " << cat1.getIdea(1) << std::endl;
    
    //deep copy
    Cat cat2 = cat1; 
    std::cout << BLU << "[Copy] Cat b copied from a" << YEL << std::endl;
    std::cout << "Cat2 Idea[0]: " << cat2.getIdea(0) << std::endl;
    std::cout << "Cat2 Idea[1]: " << cat2.getIdea(1) << std::endl;

    std::cout << "\nBefore modifying Cat2:\n";
    cat2.setIdea(0, "Hunt Birds");
    std::cout << "\nAfter modifying Cat2:\n";
    std::cout << "Cat2 Idea[0]: " << cat2.getIdea(0) << std::endl;
    std::cout << "Cat2 Idea[1]: " << cat2.getIdea(1) << std::endl;

    std::cout << "\nBrain addresses:\n";
    cat1.printBrainAddress();
    cat2.printBrainAddress();

    std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

    std::cout << GRN << "==== End of Program ====" << WHT << std::endl;

    return 0;
}
