#include <iostream>
#include <string>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

// =======================
// Constructors
// =======================
Cure::Cure() : AMateria("cure")
{
	std::cout << "[Cure] Default constructor -> type: "
		<< _type << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "[Cure] Copy constructor -> type: "
		<< _type << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "[Cure] Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		// Call base class assignment operator
		AMateria::operator=(other);
	}
	return *this;
}

// =======================
// Destructor
// =======================
Cure::~Cure()
{
	std::cout << "[Cure] Destructor -> type: "
		<< _type << std::endl;
}

// =======================
// Methods
// =======================
AMateria* Cure::clone() const
{
	std::cout << "[Cure] clone() -> creating new instance of type: "
		<< _type << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Healing " << target.getName()
		<< "’s wounds *" << std::endl;
}
