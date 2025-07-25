/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:28 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/25 13:40:47 by anamedin         ###   ########.fr       */
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
    void set_name( std::string _name);
    void set_phone( std::string _phone );
    void set_last_name( std::string _last_name);
    void set_nickname( std::string _nickname );
    void set_secret( std::string  _secret);

 
    //int metodo2() const;
    //Metodos para obtener datos(getters)
    std::string get_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_secret(void);
    std::string get_phone(void);



  private:
	//atributos privados
    //int atributo1;
    //double atributo2;
    //_ al inicio atributos 
    std::string first_name;
    std::string phone_number;
    std::string last_nane;
    std::string nickname;
    std::string darkest_secret;

};

#endif

