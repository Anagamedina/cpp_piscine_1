/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:21 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 16:45:58 by anamedin         ###   ########.fr       */
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


/*-------setter' functions--------*/

void Contact::set_name(std::string newname){
  //std::cout << "Metodo 1 llamado" << std::endl;
  this->first_name = newname;



/*-------getter' functions--------*/
  //std::string Contact::get_name( void ) {
  std::string Contact::get_name( void ){
    return this->first_name;
  }
}


