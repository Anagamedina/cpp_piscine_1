/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:01:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 11:18:39 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib> // for atoi

int main()
{
    PhoneBook phone_book;   // Create phonebook object
    std::string input_user; // Store user input

    std::cout << "🌸🌸 Welcome to My Phonebook!🌸🌸" << std::endl;

    while (1) 
    {
        // Show available commands
        std::cout << "\nAvailable commands: ✏️  ADD - 🔍SEARCH - 🚪EXIT" << std::endl;
        std::cout << "Enter command:👉 ";
        std::getline(std::cin, input_user);

        // Handle Ctrl+D (EOF)
        if (std::cin.eof())
        {
            std::cout << "\n👋 Exiting Phonebook. See you next time!" << std::endl;
            break;
        }

        // -------------------
        // ADD command
        // -------------------
        if (input_user == "ADD")
        {
            phone_book.add();
        }
        // -------------------
        // SEARCH command
        // -------------------
        else if (input_user == "SEARCH")
        {
            if (phone_book.getIndex() == 0) // Check if phonebook is empty
            {
                std::cout << "📭 Phonebook is empty. Please add a contact first." << std::endl;
                continue;
            }

            phone_book.print_table(); // Print table of contacts

            std::cout << "Select contact index: ";
            std::string index_contact;
            std::getline(std::cin, index_contact);

            if (std::cin.eof()) // Handle Ctrl+D
            {
                std::cout << "\n👋 Exiting Phonebook. See you next time!" << std::endl;
                break;
            }

            // Check if input is a number
            if (!index_contact.empty() && std::isdigit(index_contact[0]))
            {
                int new_index = std::atoi(index_contact.c_str());
                phone_book.searchContact(new_index);
            }
            else
            {
                std::cout << "❌ Invalid index. Please enter a valid number." << std::endl;
            }
        }
        // -------------------
        // EXIT command
        // -------------------
        else if (input_user == "EXIT")
        {
            std::cout << "👋 Goodbye! Thanks for using My Phonebook!" << std::endl;
            break;
        }
        // -------------------
        // Invalid command
        // -------------------
        else
        {
            std::cout << "❌ Invalid command. Please choose ADD, SEARCH, or EXIT." << std::endl;
        }
    }

    return 0;
}

