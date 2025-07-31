/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:05:21 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/30 13:52:10 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <iomanip> //para setw
#include <limits>
#include <string>
#include <cstdlib> 

class PhoneBook { 
  public:
    PhoneBook(); //size
    ~PhoneBook( void );

	//getter
    size_t getIndex();

	//metodos
	void add();
	void searchContact(int new_index);
  void print_columns(std::string str);
	void print_table();
  void exit();

  private:
    Contact _contacts[8];
    size_t _max_size;
    size_t _index;
};

#endif
