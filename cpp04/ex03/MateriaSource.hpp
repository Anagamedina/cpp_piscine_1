#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
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
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const& type);
};

#endif