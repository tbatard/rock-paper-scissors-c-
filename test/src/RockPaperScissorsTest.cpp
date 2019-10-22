#include "gtest/gtest.h"
#include <list>
#include <RockPaperScissors.h>

class RockPaperScissorsTest : public ::testing::Test {
protected:
  void SetUp() override {
    rockPaperScissors = new RockPaperScissors();
  }

  RockPaperScissors *rockPaperScissors{};
};

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenROCK_returnsRocks) {
  EXPECT_EQ(rockPaperScissors->getDisplayChoice(ROCK), "Rock");
}

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenPAPER_returnsPaper) {
  EXPECT_EQ(rockPaperScissors->getDisplayChoice(PAPER), "Paper");
}

TEST_F(RockPaperScissorsTest, getDisplayChoice_whenSCISSORS_returnsScissors) {
  EXPECT_EQ(rockPaperScissors->getDisplayChoice(SCISSORS), "Scissors");
}

TEST_F(RockPaperScissorsTest, getWinner_whenScissorsAndPaper_returnsChoice1) {
  EXPECT_EQ(rockPaperScissors->getWinner(SCISSORS, PAPER), CHOICE1);
}

TEST_F(RockPaperScissorsTest, getWinner_whenScissorsAndRock_returnsChoice2) {
  EXPECT_EQ(rockPaperScissors->getWinner(SCISSORS, ROCK), CHOICE2);
}

TEST_F(RockPaperScissorsTest, getWinner_whenScissorsAndScissors_returnsDraw) {
  EXPECT_EQ(rockPaperScissors->getWinner(SCISSORS, SCISSORS), DRAW);
}

TEST_F(RockPaperScissorsTest, getWinner_whenRockAndPaper_returnsChoice2) {
  EXPECT_EQ(rockPaperScissors->getWinner(ROCK, PAPER), CHOICE2);
}

TEST_F(RockPaperScissorsTest, getWinner_whenRockAndScissors_returnsChoice1) {
  EXPECT_EQ(rockPaperScissors->getWinner(ROCK, SCISSORS), CHOICE1);
}

TEST_F(RockPaperScissorsTest, getWinner_whenRockAndRock_returnsDraw) {
  EXPECT_EQ(rockPaperScissors->getWinner(ROCK, ROCK), DRAW);
}

TEST_F(RockPaperScissorsTest, getWinner_whenPaperAndPaper_returnsDraw) {
  EXPECT_EQ(rockPaperScissors->getWinner(PAPER, PAPER), DRAW);
}

TEST_F(RockPaperScissorsTest, getWinner_whenPaperAndScissors_returnsChoice2) {
  EXPECT_EQ(rockPaperScissors->getWinner(PAPER, SCISSORS), CHOICE2);
}

TEST_F(RockPaperScissorsTest, getRandomChoice_isRandom) {
  std::list<Choice> results;
  for (int i = 0; i < 3; ++i) {
    results.push_back(rockPaperScissors->getRandomChoice());
  }

  results.sort();
  results.unique();

  EXPECT_GE(results.size(), 2);
}
