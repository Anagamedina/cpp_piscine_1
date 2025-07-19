/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clases.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:58:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 16:46:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    // Constructor y destructor
    Contact();
    ~Contact();

    // Métodos para poner datos (setters)
    void setName(const std::string& name);
    void setPhone(const std::string& phone);

    // Métodos para obtener datos (getters)
    std::string getName() const;
    std::string getPhone() const;

private:
    std::string name;
    std::string phone;
};

#endif


#ifndef NOMBRE_CLASE_HPP
#define NOMBRE_CLASE_HPP

class NombreClase {
public:
    // Constructor
    NombreClase();

    // Destructor
    ~NombreClase();

    // Métodos públicos
    void metodo1();
    int metodo2() const;

private:
    // Atributos privados
    int atributo1;
    double atributo2;
};

#endif

