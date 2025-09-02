#include "Ice.hpp"

#include "ICharacter.hpp"


// =======================
// Constructors
// =======================
Ice::Ice() : AMateria("ice")
{
	std::cout << "[Ice] Default constructor called, type = "
		<< _type << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type)
{
	std::cout << "[Ice] Param constructor called, type = "
		<< _type << std::endl;
}

Ice::Ice(Ice const& other) : AMateria(other)
{
	std::cout << "[Ice] Copy constructor called, type = "
		<< _type << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "[Ice] Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other); // delega en la clase base
	}
	return *this;
}

// =======================
// Destructor
// =======================
Ice::~Ice()
{
	std::cout << "[Ice] Destructor called for type = "
		<< _type << std::endl;
}

// =======================
// Member functions
// =======================

// clone(): returns a new copy of this Ice object
AMateria* Ice::clone() const
{
	std::cout << "[Ice] clone() called -> creating a copy of type "
		<< _type << std::endl;
	return new Ice(*this);
}

// use(): applies the Ice effect on the target character
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}