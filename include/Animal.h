#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

/**
 * This is the base class for all the other animals
 */
class Animal {
public:
  /**
   * pure virtual function
   */
  virtual std::string speak() = 0;
  /**
   * @return the type of the animal
   */
  std::string type();
  /**
   * @param animal_type the type of animal
   * @param num the number of legs
   */
  Animal(std::string animal_type, int num);
  /**
   * @return the number of legs on the animal
   */
  int legs();

private:
  /**
   * a private variable for the type of animal
   */
  std::string type_name;
  /**
   * a private variable for the number of legs
   */
  int numLegs;
};

#endif /* ifndef ANIMAL_H */
