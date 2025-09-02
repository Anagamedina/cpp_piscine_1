#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

// ==========================================
// Concrete class that implements IMateriaSource.
// Stores up to 4 Materias and can create new ones
// based on learned "templates".
// ==========================================
class MateriaSource : public IMateriaSource
{
private:
	// Inventory to hold up to 4 learned Materias.
	AMateria* _inventory[4];

	void clearInventory();
	void copyInventory(const MateriaSource& other);

public:
	// =======================
	// Constructors / Destructor
	// =======================
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource();

	// =======================
	// Core Methods
	// =======================

	// Stores a copy of the given Materia.
	// If inventory is full, nothing happens.
	void learnMateria(AMateria* m);

	// Creates a new Materia of the given type
	// if previously learned. Returns nullptr if unknown.
	AMateria* createMateria(std::string const& type);
};

#endif