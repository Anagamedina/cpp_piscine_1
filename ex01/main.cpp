/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:01:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/29 19:23:13 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

int main()
{
	//  declare object
	PhoneBook phone_book;
	std::string input_user;
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
			std::cout << "\nchaooo" << std::endl;
			break ;
		}
		if (input_user == "ADD")
		{
			phone_book.add();
		}
		if (input_user == "SEARCH")
		{
			phone_book.searchContact();
		}

		if (input_user == "EXIT")
		{
			std::cout << "Good bye baby!..." << std::endl;
			break ;
		}
		else
		{
			std::cout << "Error prueba otro coamndo :(" << std::endl;
		}
	}
	return (0);
}
