#include <iostream>
#include <string>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
// llamamos al constructor de AMateria con "cure"
{
	std::cout << "[Cure] Default constructor called, type = "
		<< _type << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "[Cure] Copy constructor called, type = "
		<< _type << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "[Cure] Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
		// delegamos en el padre para copiar el _type
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor called for type = "
		<< _type << std::endl;
}

// Devuelve una nueva copia del objeto Cure
AMateria* Cure::clone() const
{
	std::cout << "[Cure] clone() called -> creating a copy of type "
		<< _type << std::endl;
	return new Cure(*this);
}

// Acción al usar la materia sobre un ICharacter
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
		<< "’s wounds *" << std::endl;
}