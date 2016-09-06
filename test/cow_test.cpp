#include "catch.h"
#include "Cow.h"

TEST_CASE("Cow", "[CowTest]") {
  Cow myCow;
  REQUIRE(myCow.speak() == "moo");
  REQUIRE(myCow.legs() == 4);
  REQUIRE(myCow.type() == "cow");
}
