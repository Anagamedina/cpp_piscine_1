/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:01:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/30 17:21:48 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{

	PhoneBook 		phone_book;
	std::string 	input_user;
	
	std::cout << "Welcome to my Phonebook :)" << std::endl;

	while (1)
	{
		//add search exit
		std::cout << "Choose commands :) : ADD - SEARCH - EXIT...." <<
			std::endl;
		std::cout << "Enter command: ";
		std::getline(std::cin, input_user);
		if (std::cin.eof())
		{
			std::cout << "\nGood bye..." << std::endl;
			break ;
		}
		if (input_user == "ADD")
		{
			phone_book.add();
		}
		else if (input_user == "SEARCH")
		{
			phone_book.print_table();

			std::cout << "Select index: ";
			std::string index_contact;
			std::getline(std::cin, index_contact);

			if (std::cin.eof())
			{
				std::cout << "\nGood bye..." << std::endl;
				break;
			}

			if (!index_contact.empty())
			{
				int new_index = std::atoi(index_contact.c_str());
				phone_book.searchContact(new_index);
			}
			else
			{
				std::cout << "Invalid index" << std::endl;
			}
		}


		else if (input_user == "EXIT")
		{
			std::cout << "Goodbye!..." << std::endl;
			break ;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return (0);
}
