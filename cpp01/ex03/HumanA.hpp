/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:56:39 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 18:22:50 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class Humana
{
	private:
		std::string _name;
		Weapon&     _weaponA; //siempre estara aqui porque es ref

	public:
		HumanA(std::string name, Weapon& w);
		~HumanA();

		void attack();
		
};

#endif
