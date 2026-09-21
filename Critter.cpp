//
// Created by spect on 9/16/2026.
//

#include "Critter.h"

#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <utility>
#include <bits/ios_base.h>

Critter::Critter() = default;

Critter::Critter(std::string name, std::string species, int yearsOfAge, bool isHealthy)
    : yearsOfAge(yearsOfAge), isHealthy(isHealthy), species(std::move(species)), name(std::move(name))
{

}

void Critter::print() const
{
    constexpr int NAME_COLUMN_WIDTH = 30;
    constexpr int SPECIES_COLUMN_WIDTH = 30;
    constexpr int AGE_COLUMN_WIDTH = 30;
    constexpr int HEALTH_COLUMN_WIDTH = 30;

    std::cout << std::left << std::setw(NAME_COLUMN_WIDTH)    << "Name: "    << name       << "\n";
    std::cout << std::left << std::setw(SPECIES_COLUMN_WIDTH) << "Species: " << species    << "\n";
    std::cout << std::left << std::setw(AGE_COLUMN_WIDTH)     << "Age: "     << yearsOfAge << "\n";

    if (isHealthy == false)
    {
        std::cout << std::left << std::setw(HEALTH_COLUMN_WIDTH) << "Health: " << name << " is sick!" << "\n";
    }
    else
    {
        std::cout << std::left << std::setw(HEALTH_COLUMN_WIDTH) << "Health: " << name << " is fine!" << "\n";
    }

}
