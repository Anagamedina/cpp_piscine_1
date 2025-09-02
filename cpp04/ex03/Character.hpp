#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _inventory[4];

	void copyInventory(const Character& other);
	void clearInventory();

public:
	Character();
	Character(std::string const& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();

	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif