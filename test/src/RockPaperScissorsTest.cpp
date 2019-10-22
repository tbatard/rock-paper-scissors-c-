#include "gtest/gtest.h"
#include <RockPaperScissors.h>

class RockPaperScissorsTest : public ::testing::Test {
protected:
  void SetUp() override {
    rockPaperScissorsApp = new RockPaperScissors();
  }

  RockPaperScissors* rockPaperScissorsApp{};
};

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenROCK_returnsRocks) {
  EXPECT_EQ(rockPaperScissorsApp->getDisplayChoice(ROCK), "Rock");
}

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenPAPER_returnsPaper) {
  EXPECT_EQ(rockPaperScissorsApp->getDisplayChoice(PAPER), "Paper");
}

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenSCISSORS_returnsScissors) {
  EXPECT_EQ(rockPaperScissorsApp->getDisplayChoice(SCISSORS), "Scissors");
}
