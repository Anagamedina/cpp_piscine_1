/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:09:24 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 22:13:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

// ==========================================
// Interface for Character classes
// Any class that derives from ICharacter
// must implement all pure virtual methods.
// ==========================================
class ICharacter
{
public:
	// Virtual destructor is required to ensure
	// proper cleanup of derived classes.
	virtual ~ICharacter()
	{
	}

	// Returns the name of the character.
	virtual std::string const& getName() const = 0;

	// Equips a Materia into the character’s inventory.
	virtual void equip(AMateria* m) = 0;

	// Unequips a Materia (does NOT delete it).
	virtual void unequip(int idx) = 0;

	// Uses a Materia on another ICharacter.
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif