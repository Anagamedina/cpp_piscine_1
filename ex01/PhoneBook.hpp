/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:05:21 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/29 18:50:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook { 
  public:
    PhoneBook(); //size
    ~PhoneBook( void );

	//getter
    std::string getIndex();

	//metodos
	void add();
	void searchContact();

  private:
    Contact _contacts[8];
    size_t _max_size;
    size_t _index;
};

#endif
