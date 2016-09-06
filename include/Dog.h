#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.h"

/**
 * Dog class inherits from animal
 */
class Dog : public Animal {
public:
  /**
   * speaks like a dog
   */
  std::string speak();
  /**
   * constucts a dog bow wow
   * needs to create an animal type
   */
  Dog() : Animal("dog", 4){};
};

#endif /* ifndef DOG_HPP */
