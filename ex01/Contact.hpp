/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:28 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 16:46:07 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

//declarando 
class Contact{
  public:
    //costructor 
    Contact();
    //destructor
    ~Contact();

    //metodos publicos
    //metodos para poner datos(setters)
    //void setName(const std::string& newname);
    void set_name( std::string newname );
    void set_phone( std::string newphone );

 
    //int metodo2() const;
    //Metodos para obtener datos(getters)
    std::string get_name(void);
    std::string get_phone(void);



  private:
	//atributos privados
    //int atributo1;
    //double atributo2;
    //_ al inicio atributos 
    std::string first_name;
    std::string phone_number;

};

#endif

