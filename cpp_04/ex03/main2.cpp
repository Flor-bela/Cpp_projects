
/// VERLO MEJOR -> solo un main!
// VER HOJA DE CORRECCIONES!!!

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>

int main(void)
{

    std::cout << "--- 1. BASIC TESTS ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);



	/////////////////////////////////////////////////////////
    std::cout << "\n--- 2. OVERFLOW TESTS ---" << std::endl;
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    
    // No equipa esta materia!
    AMateria* extraMateria = src->createMateria("ice");
    me->equip(extraMateria);
    delete extraMateria;


    std::cout << "\n--- 3. UNEQUIP TESTS ---" << std::endl;
    AMateria* droppedMateria = src->createMateria("cure");
    me->equip(droppedMateria); // No hará nada si el inventario sigue lleno
    
    me->unequip(2); // Desequipamos el índice 2 (ice)
    me->use(2, *bob); // No debería hacer nada

    
    std::cout << "\n--- 4. DEEP COPY TESTS ---" << std::endl;
    Character original("Original");
    original.equip(src->createMateria("ice"));
    
    Character copy(original);
    copy.equip(src->createMateria("cure")); // Equipamos a la copia para diferenciarlos
    
    std::cout << "Original uses slot 1 (should be empty):" << std::endl; // -> should be ice!!!!! -> mirarlo mejor
    original.use(1, *bob);
    std::cout << "Copy uses slot 1 (should be cure):" << std::endl;
    copy.use(1, *bob);


    std::cout << "\n--- CLEANING UP ---" << std::endl;
    delete bob;
    delete me;
    delete src;
    
   
    
    return 0;
}