/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:22:03 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/11 12:29:10 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



/*
 * struct NombreDeLaEstructura{
 * tipo_de_dato campo1;
 * tipo_de_dato campo2;
 *
 *definicion de metodos, propiedades...etc
 * }*/

struct Punto
{
  int x;
  int y;

  Punto(int x, int y) : X(x), Y(y)
  {
	void ImprimirCoordenadas() const {
	  std::cout << "coordenadas: ("<< X << ", " << Y << ")" << std:: endl;
	}
  }

}


main()
{
  Punto punto(3, 5);
  punto.ImprimirCoordenadas();
  return (0);
}
