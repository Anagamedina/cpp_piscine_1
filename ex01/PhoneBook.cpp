/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:47:17 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/30 09:50:00 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip> //para setw
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


void print_column(std::string str){
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + "."; //truncar y añadir .
	else
		std::cout << std::setw(10) << str;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::add(void)
{
	Contact new_contact;
	std::string input;

	std::cout << "Add new contact:\n";

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


//imprimir todos los contactos
//---->>> void print() setw
//----->>> truncar con (.)
//pregnutar que indice quieres ver
//comprobar que el indice exista y si no mensaje error
//comprobar que el indice exista, entregar datos del contacto x

void PhoneBook::searchContact(void)
{
	size_t	max_index;

	if (_index == 0)
	{
		std::cout << "Agenda vacia: Añade un contacto primero.\n";
		return ;
	}

	if (_index == 8)
		max_index = 8;
	else
		max_index = _index;

	std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "Name" << "|"
				<< std::setw(10) << "LastName" << "|"
				<< std::setw(10) << "Nickname" << std::endl;

	for (size_t i = 0; i < max_index; i++)
	{
		std::cout << std::setw(10) << i << "|";
		print_column(_contacts[i].get_name());
		std::cout << "|";
		print_column(_contacts[i].get_last_name());
		std::cout << "|";
		print_column(_contacts[i].get_nickname());
		std::cout << std::endl;
	}
	
	//pedir indice usuario 
	std::cout << "Add index of contact you want to see: ";
	int index;
	std::cin >> index;

	if (index < 0 || index >= _index)
	{
		std::cout << "Index out of range\n";
		return ;
	}

	//Mostrar datos del contacto elegido
	std::cout << std::setw(10) << "Name" << ": " << _contacts[index].get_name() << std::endl;
	std::cout << std::setw(10) << "Last name" << ": " << _contacts[index].get_last_name() << std::endl;
	std::cout << std::setw(10) << "Nickname" << ": " << _contacts[index].get_nickname() << std::endl;
	std::cout << std::setw(10) << "Phone" << ": " << _contacts[index].get_phone() << std::endl;
	std::cout << std::setw(10) << "Secret" << ": " << _contacts[index].get_secret() << std::endl;






}