#ifndef COW_HPP
#define COW_HPP

#include "Animal.h"

/**
 * my Cow class moooooo
 */
class Cow : public Animal {
public:
  /**
   * speaks like a cow
   */
  std::string speak();
  /**
   * constructor for cow
   * calls animal constructor
   */
  Cow() : Animal("cow", 4){};
};

#endif /* ifndef COW_HPP */
