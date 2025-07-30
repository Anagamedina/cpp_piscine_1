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




void PhoneBook::print_table(void)
{
	if (this->_index == 0)
	{
		std::cout << "Agenda vacia: Añade un contacto primero.\n";
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "Name" << "|"
			<< std::setw(10) << "LastName" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;

	int max_index;
	if (this->_index == 8)
		max_index = 8;
	else
		max_index = this->_index;

	for (int  i = 0; i < max_index; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		print_columns(_contacts[i].get_name());
		std::cout << "|";
		print_columns(_contacts[i].get_last_name());
		std::cout << "|";
		print_columns(_contacts[i].get_nickname());
		std::cout  << "|" << std::endl;
	}
}

void PhoneBook::searchContact(int index)
{
	int 	max_index;

	if (this->_index == 0) //cambio this->
	{
		std::cout << "Agenda vacia: Añade un contacto primero.\n";
		return ;
	}
	if (this->_index == 8)
			max_index = 8;
		else
			max_index = this->_index;
	
		std::cout << "Add index of contact you want to see: ";
		if (index < 0 || index >= max_index)
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

	