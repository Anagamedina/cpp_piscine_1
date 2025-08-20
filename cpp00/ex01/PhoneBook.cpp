/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:47:17 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/30 11:21:56by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

// =========================
// Constructor & Destructor
// =========================

PhoneBook::PhoneBook()
{
    _index = 0;      // Current number of contacts added
    _max_size = 8;   // Maximum contacts allowed
}

PhoneBook::~PhoneBook()
{
    // Nothing special to clean up
}

// =========================
// Getters
// =========================

size_t PhoneBook::getIndex(void)
{
    return this->_index; // Return current contact count
}

// =========================
// Helper Functions
// =========================

// Print a string in a column, max width 10
void PhoneBook::print_columns(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) + "."; // Truncate and add dot
    else
        std::cout << std::setw(10) << str;   // Right-align
}

// =========================
// Main Functionalities
// =========================

// Add a new contact to the phonebook
void PhoneBook::add(void)
{
    Contact new_contact;
    std::string input;

    std::cout << "Add new contact:\n";

    // Get first name
    std::cout << "FirstName: ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
    new_contact.set_name(input);

    // Get last name
    std::cout << "Last name: ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
    new_contact.set_last_name(input);

    // Get nickname
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
    new_contact.set_nickname(input);

    // Get phone number
    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
    new_contact.set_phone(input);

    // Get secret
    std::cout << "Secret code: ";
    std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
    new_contact.set_secret(input);

    // Save contact in circular array
    this->_contacts[this->_index % 8] = new_contact;
    this->_index++;

    std::cout << "Contact added successfully!" << std::endl;
}

// Print all contacts in a table format
void PhoneBook::print_table(void)
{
    if (this->_index == 0)
    {
        std::cout << "Phonebook empty. Add a contact first.\n";
        return;
    }

    // Print table header
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "Name" << "|"
              << std::setw(10) << "LastName" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;

    // Print each contact in the table
    int size = (_index < 8) ? _index : 8;
    for (int i = 0; i < size; i++)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        print_columns(_contacts[i].get_name());
        std::cout << "|";
        print_columns(_contacts[i].get_last_name());
        std::cout << "|";
        print_columns(_contacts[i].get_nickname());
        std::cout << "|" << std::endl;
    }
}

// Show full details of a single contact by index
void PhoneBook::searchContact(int index)
{
    std::cout << "Enter index of contact you want to see:\n";

    // Check invalid index
    if (index < 0 || index >= (int)this->_max_size || std::isalpha(index) == 1)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    if (index < (int)this->_index)
    {
        std::cout << std::setw(10) << "Name" << ": " << _contacts[index].get_name() << std::endl;
        std::cout << std::setw(10) << "Last name" << ": " << _contacts[index].get_last_name() << std::endl;
        std::cout << std::setw(10) << "Nickname" << ": " << _contacts[index].get_nickname() << std::endl;
        std::cout << std::setw(10) << "Phone" << ": " << _contacts[index].get_phone() << std::endl;
        std::cout << std::setw(10) << "Secret" << ": " << _contacts[index].get_secret() << std::endl;    
    }
}
