/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:34:35 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/14 11:03:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void ){
  {

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
  
    delete j;
    delete i;
  }

  std::cout << "ARRAY OF ANIMALS OBJECTS ->" << std::endl;
  Animal *animal_arr[4];
  for (int i = 0; i < 4; i++){
    if(i % 2 == 0){
      animal_arr[i] = new Dog();
      std::cout << "_______" << std::endl;
    }
    else{
      animal_arr[i] = new Cat();
      std::cout << "_______" << std::endl;

    }
    for(int i = 0; i < 4; i++){
      animal_arr[i]->makeSound();
    }
    std::cout << "-------" << std::endl;
    for(int i = 0; i < 4; i++){
      delete animal_arr[i];
  }

    std::cout << "SHALLOW COPY" <<  std::endl;
    Cat a;
    Cat b = a;
    std::cout << "_____" << std::endl;
  return  (0);
  }
}
