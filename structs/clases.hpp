/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clases.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:58:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 12:58:58 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

