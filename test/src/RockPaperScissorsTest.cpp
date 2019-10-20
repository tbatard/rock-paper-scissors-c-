#include "gtest/gtest.h"
#include <RockPaperScissors.h>

TEST(RockPaperScissorsTestSuite, getDisplayChoice_whenROCK_returnsRocks) {
  EXPECT_EQ(RockPaperScissors::getDisplayChoice(ROCK), "Rock");
}

TEST(RockPaperScissorsTestSuite, getDisplayChoice_whenPAPER_returnsPaper) {
  EXPECT_EQ(RockPaperScissors::getDisplayChoice(PAPER), "Paper");
}

TEST(RockPaperScissorsTestSuite, getDisplayChoice_whenSCISSORS_returnsScissors) {
  EXPECT_EQ(RockPaperScissors::getDisplayChoice(SCISSORS), "Scissors");
}
