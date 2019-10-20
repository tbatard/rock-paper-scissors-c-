#include "gtest/gtest.h"
#include <HelloWorld.h>

TEST(HelloWorldTestSuite, sayHello) {
  EXPECT_EQ(HelloWorld::sayHello(), "Hello World!");
}
