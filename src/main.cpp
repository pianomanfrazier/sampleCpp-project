#include <iostream>
#include "Dog.h"
#include "Cow.h"
#include "Chicken.h"

int main() {
  Dog myDog;
  std::cout << myDog.type() << " says: " << myDog.speak() << " and it has "
            << myDog.legs() << " number of legs " << std::endl;

  Cow myCow;
  std::cout << myCow.type() << " says: " << myCow.speak() << " and it has "
            << myCow.legs() << " number of legs " << std::endl;

  Chicken myChicken;
  std::cout << myChicken.type() << " says: " << myChicken.speak()
            << " and it has " << myChicken.legs() << " number of legs "
            << std::endl;

  return EXIT_SUCCESS;
}

