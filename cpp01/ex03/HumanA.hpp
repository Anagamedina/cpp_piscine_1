/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:56:39 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 10:12:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>
class HumanA
{
	private:
		std::string _name;
		Weapon&     _weaponA; //es una referencia a un objeto de tipo Weapon

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();
		
};

#endif
