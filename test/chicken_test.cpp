#include "catch.h"
#include "Chicken.h"

TEST_CASE("Chicken", "[ChickenTest]") {
  Chicken myChicken;
  REQUIRE(myChicken.speak() == "cluck cluck");
  REQUIRE(myChicken.legs() == 2);
  REQUIRE(myChicken.type() == "chicken");
}
