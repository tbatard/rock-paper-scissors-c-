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
  EXPECT_CALL(rockPaperScissors, getDisplayChoice).Times(testing::Exactly(4));

  rockPaperScissorsApp->start(mockedInput);
}

TEST_F(RockPaperScissorsAppTest, displayChoices) {
  EXPECT_CALL(rockPaperScissors, getDisplayChoice).Times(testing::Exactly(3));

  testing::internal::CaptureStdout();

  rockPaperScissorsApp->displayChoices();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ("1: Rock\n2: Paper\n3: Scissors\n", output.data());
}
