/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:47:17 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/29 19:37:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip> //TODO
#include <limits>
#include <string>
#include <cstdlib> //TODO
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	_max_size = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(void)
{
	Contact new_contact;
	std::string input;

	std::cout << "Añade nuevo contacto:\n";

	std::cout << "FirstName: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		return;
	}
	new_contact.set_name(input);

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		return;
	}
	new_contact.set_last_name(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		return;
	}
	new_contact.set_nickname(input);

	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		return;
	}
	new_contact.set_phone(input);

	std::cout << "Secret code: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		return;
	}
	new_contact.set_secret(input);

	std::cout << "Contact added: " << std::endl;
	this->_contacts[this->_index % 8] = new_contact;
	this->_index++;
}


void PhoneBook::searchContact(void)
{
	//imprimir todos los contactos 
	//---->>> void print() setw 
	//----->>> truncar con (.)
	//pregnutar que indice quieres ver
	//comprobar que el indice exista y si no mensaje error
	//comprobar que el indice exista, entregar datos del contacto x
}


void PhoneBook::exit(void)
{
	//exit print y un break
}
