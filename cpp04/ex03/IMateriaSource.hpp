/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:12:54 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 22:14:30 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

// ==========================================
// Interface for Materia sources.
// Any class that derives from IMateriaSource
// must implement the following behaviors:
// - Learn new Materias.
// - Create Materias based on their type.
// ==========================================
class IMateriaSource
{
public:
	// Virtual destructor ensures proper cleanup
	// of derived classes.
	virtual ~IMateriaSource() {}

	// Stores a copy of the given Materia in memory
	// so it can be cloned later.
	virtual void learnMateria(AMateria* m) = 0;

	// Creates a new Materia based on the given type.
	// Returns nullptr if the type is unknown.
	virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif

