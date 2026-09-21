//
// Created by spect on 9/16/2026.
//

#ifndef MYOWNCLASS_CRITTER_H
#define MYOWNCLASS_CRITTER_H

#include <string>


class Critter
{
private:

    int yearsOfAge{};
    bool isHealthy{};
    std::string species;
    std::string name;


public:

    Critter();

    Critter(std::string name, std::string species, int yearsOfAge, bool isHealthy);

    [[nodiscard]] int getAgeInYears() const { return yearsOfAge; }
    [[nodiscard]] bool isCritterHealthy() const { return isHealthy;}
    [[nodiscard]] std::string getSpecies() const { return species; }
    [[nodiscard]] std::string getName() const { return name; }

    void setAge(const int newYearsOfAge) { if (newYearsOfAge >= 0) {yearsOfAge = newYearsOfAge;} }
    void setHealthBool(const bool newHealthStatus) { isHealthy = newHealthStatus; }
    void setSpecies(const std::string& speciesInput) { species = speciesInput; }
    void setName(const std::string& nameInput) { name = nameInput; }

    void print() const;



};


#endif //MYOWNCLASS_CRITTER_H
