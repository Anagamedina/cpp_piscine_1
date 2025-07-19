/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej03.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:48:18 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/11 13:56:51 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
  std::cout << "Dame el mes:(1, 2, 3....,12):";
  int mes;
  std::cin >> mes;

  if (mes > 0 && mes < 13)
  {
    if (mes == 1)
      std::cout << "El mes tiene 31 dias. \n";
    else if (mes ==2)
      std::cout << "EL mes tiene 28 o 29 dias.\n";

  }

}
