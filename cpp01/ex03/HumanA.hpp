/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:56:39 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/02 12:11:45 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>



//No se crea una copia, sino un alias de una instancia existente
//Debe ser inicializada en el momento en que se declara (en el constructor).
//cuidado!! int& a, b --> a es ref y b normal 

class HumanA
{
	private:
		std::string _name;
		Weapon&     _weaponA; //siempre estara aqui porque es ref

	public:
		//siempre se creará con un nombre y un arma (subj)
		HumanA(std::string name, Weapon& w);
		~HumanA();

		void attack();
		
};

#endif
