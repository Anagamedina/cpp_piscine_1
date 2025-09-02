/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:09:55 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/30 18:09:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter(), _inventory()
{
	this->_name = "Character_default";
}

Character::Character(std::string const& name) : _name(name), _inventory()
{
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}


Character::Character(const Character& other) : _inventory()
{

}

