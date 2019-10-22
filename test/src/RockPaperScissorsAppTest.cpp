#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockRockPaperScissors.h"
#include <RockPaperScissorsApp.h>
#include <fstream>

class RockPaperScissorsAppTest : public ::testing::Test {
protected:
  void SetUp() override {
    rockPaperScissorsApp = new RockPaperScissorsApp(&rockPaperScissors);
  }

  MockRockPaperScissors rockPaperScissors;
  RockPaperScissorsApp *rockPaperScissorsApp{};
};

TEST_F(RockPaperScissorsAppTest, start_callsDisplayMethod3Times) {
  std::ifstream mockedInput;
  EXPECT_CALL(rockPaperScissors, getDisplayChoice).Times(testing::Exactly(5));
  EXPECT_CALL(rockPaperScissors, getRandomChoice).Times(testing::Exactly(1));
  EXPECT_CALL(rockPaperScissors, getWinner).Times(testing::Exactly(1));

  rockPaperScissorsApp->start(mockedInput);
}

TEST_F(RockPaperScissorsAppTest, displayChoices) {
  EXPECT_CALL(rockPaperScissors, getDisplayChoice).Times(testing::Exactly(3));

  testing::internal::CaptureStdout();

  rockPaperScissorsApp->displayChoices();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ("1: Rock\n2: Paper\n3: Scissors\n", output.data());
}

TEST_F(RockPaperScissorsAppTest, mapInputToChoice_whenInputIs1) {
  EXPECT_EQ(rockPaperScissorsApp->mapInputToChoice(1), ROCK);
}

TEST_F(RockPaperScissorsAppTest, mapInputToChoice_whenInputIs2) {
  EXPECT_EQ(rockPaperScissorsApp->mapInputToChoice(2), PAPER);
}

TEST_F(RockPaperScissorsAppTest, mapInputToChoice_whenInputIs3) {
  EXPECT_EQ(rockPaperScissorsApp->mapInputToChoice(3), SCISSORS);
}

TEST_F(RockPaperScissorsAppTest, determineWinner_whenIaWins) {
  EXPECT_CALL(rockPaperScissors, getWinner(ROCK, PAPER))
      .Times(testing::Exactly(1))
      .WillOnce(testing::Return(CHOICE2));

  testing::internal::CaptureStdout();

  rockPaperScissorsApp->determineWinner(ROCK, PAPER);

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ("The IA won!\n", output.data());
}

TEST_F(RockPaperScissorsAppTest, determineWinner_whenPlayerWins) {
  EXPECT_CALL(rockPaperScissors, getWinner(ROCK, SCISSORS))
      .Times(testing::Exactly(1))
      .WillOnce(testing::Return(CHOICE1));

  testing::internal::CaptureStdout();

  rockPaperScissorsApp->determineWinner(ROCK, SCISSORS);

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ("You won!\n", output.data());
}

TEST_F(RockPaperScissorsAppTest, determineWinner_whenDraw) {
  EXPECT_CALL(rockPaperScissors, getWinner(ROCK, ROCK))
      .Times(testing::Exactly(1))
      .WillOnce(testing::Return(DRAW));

  testing::internal::CaptureStdout();

  rockPaperScissorsApp->determineWinner(ROCK, ROCK);

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ("Draw!\n", output.data());
}
