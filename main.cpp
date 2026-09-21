//
//  Class Assignment - Andrew
//

#include <iostream>

#include "critter.h"

int main()
{
    Critter Fox;
    Critter Dog;

    Fox.setName("Dew");
    Fox.setSpecies("Vulpes lagopus");
    Fox.setHealthBool(true);
    Fox.setAge(2);

    Dog.setName("June");
    Dog.setSpecies("Canis lupus familiaris");
    Dog.setHealthBool(false);
    Dog.setAge(9);

    Fox.print();
    Dog.print();


    return 0;
}
