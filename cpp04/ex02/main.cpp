/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:47:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 13:37:07 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void) {
    //------------------------------
    // Single AAnimal Objects
    //------------------------------
    std::cout << GRN << "=== Single AAnimal Objects ===" << std::endl;

    const AAnimal* Doggy = new Dog();
    const AAnimal* kitty = new Cat();
    //const AAnimal* AnimalBase = new AAnimal; ------>Demo Abstract

    std::cout << CYN << "---------------------" << std::endl;
    std::cout << BLU << "[Type] Doggy is a " << Doggy->getType() << std::endl;
    std::cout << CYN << "---------------------" << std::endl;

    std::cout << MAG ;
    Doggy->makeSound();

    std::cout << CYN << "---------------------" << std::endl;
    std::cout << BLU << "[Type] kitty is a " << kitty->getType() << std::endl;
    std::cout << CYN << "---------------------" << std::endl;

    std::cout << MAG ;
    kitty->makeSound();

    std::cout << WHT "\n--- Press ENTER to continue ---";
	std::cin.get();
    std::cout << WHT;
    delete Doggy;
    delete kitty;

    std::cout << GRN << "==== End of Program ====" << std::endl;

    return 0;
}
