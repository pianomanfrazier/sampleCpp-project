#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "Animal.h"

/**
 * my Chicken class inherits from Animal
 */
class Chicken : public Animal {
public:
  /**
   * speaks like a chicken "cluck cluck"
   */
  std::string speak();
  /**
   * constructor for the chicken
   * which calls the animal constructor
   */
  Chicken() : Animal("chicken", 2){};
};

#endif /* ifndef CHICKEN_HPP */
