/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clases.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:58:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 13:11:43 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NombreClase.hpp"
#include <iostream>

// Constructor
NombreClase::NombreClase() {
    // Código para inicializar atributos si hace falta
}

// Destructor
NombreClase::~NombreClase() {
    // Código para liberar recursos si es necesario
}

void NombreClase::metodo1() {
    std::cout << "Método 1 llamado" << std::endl;
}

int NombreClase::metodo2() const {
    return 42;  // Ejemplo
}

