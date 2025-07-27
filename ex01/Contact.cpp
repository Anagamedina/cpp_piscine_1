/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:21 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/27 09:55:47 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream> 

//inicializando 
//constructor 
contact::contact(){
  //codigo para inicializar atributos si hace falta 
}

//destructor
contact::~contact(){
  //codigo para liberar recusos si es necesario 
}

//
/*-------setter' functions--------*/

void Contact::set_name(std::string _name){
  this->first_name = _name;
}
void Contact::set_phone(std::string _phone){
  this->phone_number = _phone;
}

void Contact::set_last_name(std::string _last_name){
  this->last_name = _last_name;
}
void Contact::set_darkest_secret(std::string _secret){
  this->darkest_secret = _secret;
}
void Contact::set_nickname(std::string _newname){
  this->nickname = _nickname;
}

/*-------getter' functions--------*/
  std::string Contact::get_name( void ){
    return this->first_name;
  }
  std::string Contact::get_phone( void ){
    return this->phone_number;
  }
  std::string Contact::get_last_name( void ){
    return this->last_name;
  }
  std::string Contact::get_nickname(void ){
    return this->nickname;
  }
  std::string Contact::get_secret( void ){
    return this->darkest_secret;
  }
}


