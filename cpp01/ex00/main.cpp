/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:52:56 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:17:58 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string input;
    // ==========================
    // STACK ZOMBIE CREATION
    // ==========================
    std::cout << "\n=== STACK ZOMBIE CREATION ===" << std::endl;
    std::cout << "Enter a name for the stack zombie: ";
    if (!std::getline(std::cin, input)) 
    {
        std::cerr << "Error: failed to read input" << std::endl;
        return 1; 
    }
    randomChump(input); // create Zombie on the stack

    // ==========================
    // HEAP ZOMBIE CREATION
    // ==========================
    std::cout << "\n=== HEAP ZOMBIE CREATION ===" << std::endl;
    std::cout << "Enter a name for the heap zombie: ";
    if (!std::getline(std::cin, input)) 
    {
        std::cerr << "Error: failed to read input" << std::endl;
        return 1;
    }
    Zombie* zombiPtr = newZombie(input); 
    zombiPtr->announce();              
    delete zombiPtr;                  

    std::cout << "\nAll zombies handled correctly. Exiting program." << std::endl;

    return 0; 
}

