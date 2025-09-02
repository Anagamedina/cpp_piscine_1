/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:07:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/30 18:07:44 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// =======================
// Constructors
// =======================
AMateria::AMateria() : _type("Default")
{
	std::cout << "[AMateria] default contructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "[AMateria] constructor with type called."
		<< std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
}


// =======================
// Overload operator
// =======================
AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "[AMateria copy] assignment operator called." << std::endl;
	return (*this);
}

// =======================
// Destructor
// =======================
AMateria::~AMateria()
{
}

// =======================
// Mandatory member functions
// =======================

void AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const& AMateria::getType() const
{
	return _type;
}