#include <string>
#include "Animal.h"

Animal::Animal(std::string animal_type, int num)
    : type_name(animal_type), numLegs(num) {}

std::string Animal::type() { return this->type_name; }

int Animal::legs() { return this->numLegs; }

