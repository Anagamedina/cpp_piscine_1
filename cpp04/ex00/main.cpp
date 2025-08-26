/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:34:35 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:08:34 by anamedin         ###   ########.fr       */
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
    std::cout << GRN << "=== Normal Animals ===" << CYN << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << BLU << "[Type] j is a " << j->getType() << CYN << std::endl;
    std::cout << BLU << "[Type] i is a " << i->getType() << CYN << std::endl;

    std::cout << MAG << "[Sound] i makes sound: " << CYN;
    i->makeSound();

    std::cout << MAG << "[Sound] j makes sound: " << CYN;
    j->makeSound();

    std::cout << MAG << "[Sound] meta makes sound: " << CYN;
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    //------------------------------
    // Testing WrongAnimals
    //------------------------------
    std::cout << YEL << "\n=== WrongAnimals ===" << CYN << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << CYN << "[Type] k is a " << k->getType() << CYN << std::endl;

    std::cout << RED << "[Sound] k makes sound: " << CYN;
    k->makeSound();

    std::cout << RED << "[Sound] wrongMeta makes sound: " << CYN;
    wrongMeta->makeSound();

    delete wrongMeta;
    delete k;

    return 0;
}



