///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "Animal.h"

using namespace std;

const string Animal::kingdom = "Animalia" ;

Animal::Animal(const string &newSpecies) : species(newSpecies) {
    Animal::species = newSpecies;
}


Animal::Animal(const string &species, Gender gender) : species(species), gender(gender) {


}

Animal::Animal(const string &species, Gender gender, float weight) : species(species), gender(gender), weight(weight) {

}


Animal::Animal(const string &species, float weight) : species(species), weight(weight) {

}


const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}

