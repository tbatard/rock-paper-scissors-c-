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
