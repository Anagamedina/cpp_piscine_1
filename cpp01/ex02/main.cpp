/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:15:03 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:26:17 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;  // pointer to str
    std::string& stringREF = str;   // reference to str

    std::cout << "\n=== POINTERS AND REFERENCES ===\n" << std::endl;

    std::cout << "Original string variable:       str = \"" << str << "\"" << std::endl;
    std::cout << "Pointer to string:              stringPTR = &str" << std::endl;
    std::cout << "Reference to string:            stringREF = str" << std::endl;
    std::cout << std::endl;

    std::cout << "Memory address of string:       " << &str << std::endl;
    std::cout << "Memory address held by pointer: " << stringPTR << std::endl;
    std::cout << "Memory address of reference:    " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "Value of string variable:       " << str << std::endl;
    std::cout << "Value pointed to by pointer:    " << *stringPTR << std::endl;
    std::cout << "Value referred by reference:    " << stringREF << std::endl;

    std::cout << std::endl;

    return 0;
}

