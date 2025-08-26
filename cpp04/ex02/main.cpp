/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:47:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:25:52 by anamedin         ###   ########.fr       */
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

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << CYN << "---------------------" << std::endl;
    std::cout << BLU << "[Type] j is a " << j->getType() << std::endl;
    std::cout << CYN << "---------------------" << std::endl;

    std::cout << MAG << "[Sound] j makes sound: ";
    j->makeSound();

    std::cout << CYN << "---------------------" << std::endl;
    std::cout << BLU << "[Type] i is a " << i->getType() << std::endl;
    std::cout << CYN << "---------------------" << std::endl;

    std::cout << MAG << "[Sound] i makes sound: ";
    i->makeSound();

    delete j;
    delete i;

    std::cout << GRN << "==== End of Program ====" << std::endl;

    return 0;
}
