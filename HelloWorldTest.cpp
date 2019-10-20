#include "gtest/gtest.h"
#include "HelloWorld.h"

TEST(HelloWorldTestSuite, sayHello) {
  HelloWorld helloWorld;

  EXPECT_EQ(helloWorld.sayHello(), "Hello World!");
}
