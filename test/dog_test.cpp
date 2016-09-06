#include "catch.h"
#include "Dog.h"

TEST_CASE("Dog", "[DogTest]") {
  Dog myDog;
  REQUIRE(myDog.speak() == "bow-wow");
  REQUIRE(myDog.legs() == 4);
  REQUIRE(myDog.type() == "dog");
}
