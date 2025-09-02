cmake_minimum_required(VERSION 3.13)
project(cpp-module-00)
set(CMAKE_CXX_STANDARD 98)

add_executable(diamond
        cpp03/ex03/main.cpp
        cpp03/ex03/DiamondTrap.cpp
        cpp03/ex03/DiamondTrap.hpp
        cpp03/ex03/FragTrap.cpp
        cpp03/ex03/FragTrap.hpp
        cpp03/ex03/ClapTrap.cpp
        cpp03/ex03/ClapTrap.hpp
        cpp03/ex03/ScavTrap.cpp
        cpp03/ex03/ScavTrap.hpp
)

add_executable(deepCopy cpp04/ex01/main.cpp
        cpp04/ex01/Animal.cpp
        cpp04/ex01/Animal.hpp
        cpp04/ex01/Cat.cpp
        cpp04/ex01/Cat.hpp
        cpp04/ex01/Dog.cpp
        cpp04/ex01/Dog.hpp
        cpp04/ex01/Brain.cpp
        cpp04/ex01/Brain.hpp
)

add_executable(Interfaces cpp04/ex03/main.cpp
        cpp04/ex03/AMateria.cpp
        cpp04/ex03/AMateria.hpp
        cpp04/ex03/Character.cpp
        cpp04/ex03/Character.hpp
        cpp04/ex03/Cure.cpp
        cpp04/ex03/Cure.hpp
        cpp04/ex03/Ice.cpp
        cpp04/ex03/Ice.hpp
        cpp04/ex03/ICharacter.hpp
        cpp04/ex03/IMateriaSource.hpp
        cpp04/ex03/MateriaSource.cpp
        cpp04/ex03/MateriaSource.hpp

)
