/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:34:35 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 11:19:26 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void) {
    //------------------------------
    // Testing normal Animals
    //------------------------------
    std::cout << GRN << "=== Normal Animals ===" << WHT << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << BLU << "[Type] j is a " << j->getType() << WHT << std::endl;
    std::cout << BLU << "[Type] i is a " << i->getType() << WHT << std::endl;

    std::cout << "\n--- Press ENTER to continue ---";
	std::cin.get();

    std::cout << MAG << "[Sound] i makes sound: " << YEL;
    i->makeSound();

    std::cout << MAG << "[Sound] j makes sound: " << YEL;
    j->makeSound();

    std::cout << MAG << "[Sound] meta makes sound: " << YEL ;
    meta->makeSound();

    std::cout << WHT  "\n--- Press ENTER to continue ---";
	std::cin.get();

    delete meta;
    delete j;
    delete i;

    //------------------------------
    // Testing WrongAnimals
    //------------------------------
    std::cout << YEL << "\n=== WrongAnimals ===" << WHT << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << BLU << "[Type] k is a " << k->getType() << YEL << std::endl;
    
    std::cout << WHT  "\n--- Press ENTER to continue ---";
	std::cin.get();
    std::cout << MAG << "[Sound] k makes sound: " << YEL;
    k->makeSound();

    std::cout << MAG << "[Sound] wrongMeta makes sound: " << YEL;
    wrongMeta->makeSound();

    std::cout << WHT  "\n--- Press ENTER to continue ---";
	std::cin.get();

    delete wrongMeta;
    delete k;

    return 0;
}



