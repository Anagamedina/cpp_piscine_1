/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:52:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 13:09:55 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  std::string   input;

  std::cout <<"Zombi saved in the stack: ";
  if (!std::getline(std::cin, input))
  {
    std::cerr << std::endl << "Error: failed to read input " << std:: endl;
    std::cout << "Exited properly. " << std::endl;
    return (1);
  }

  //randomChump
  randomChump(input);

  std::cout <<"Zombi saved in the HEAP: ";
  if (!std::getline(std::cin, input))
  {
    std::cerr << std::endl << "Error: failed to read input " << std:: endl;
    std::cout << "Exited properly. " << std::endl;
    return (1);
  }

  //newZombie
  Zombie *zombiPtr = newZombie(input); 
  //announce
  zombiPtr->announce();
  delete(zombiPtr);
  return (0);


}
