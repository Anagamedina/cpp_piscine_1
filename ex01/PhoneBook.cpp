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

PhoneBook::PhoneBook()
{
	_index = 0;
	_max_size = 8;
}

size_t PhoneBook::getIndex(void){
	return this->_index;
}
void PhoneBook::print_columns(std::string str){
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + "."; 
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


/*void PhoneBook::searchContact(int new_index)
{
	size_t contact_count;

	if (_index > 8)
		contact_count = 8;
	else
		contact_count = _index;

	if (new_index < 0 || new_index >= (int)contact_count)
	{
		std::cout << "❌ Invalid index.\n";
		return;
	}

	Contact contact = _contacts[new_index];

	std::cout << "First name:     " << contact.get_name() << std::endl;
	std::cout << "Last name:      " << contact.get_last_name() << std::endl;
	std::cout << "Nickname:       " << contact.get_nickname() << std::endl;
	std::cout << "Phone number:   " << contact.get_phone() << std::endl;
	std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
}*/
void PhoneBook::print_table(void)
{
		std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "Name" << "|"
				<< std::setw(10) << "LastName" << "|"
				<< std::setw(10) << "Nickname" << std::endl;

	for (size_t i = 0; i < this->_max_size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		print_columns(_contacts[i].get_name());
		std::cout << "|";
		print_columns(_contacts[i].get_last_name());
		std::cout << "|";
		print_columns(_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void PhoneBook::searchContact(int index)
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


	
	//pedir indice usuario 
	std::cout << "Add index of contact you want to see: ";
	//int index;
	//std::cin >> index;

	if (index < 0 )//|| index >= this->_index)
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


	