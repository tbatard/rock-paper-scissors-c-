#ifndef ROCK_PAPER_SCISSORS_C___MOCKROCKPAPERSCISSORS_H
#define ROCK_PAPER_SCISSORS_C___MOCKROCKPAPERSCISSORS_H

#include "gmock/gmock.h"
#include <RockPaperScissors.h>

class MockRockPaperScissors : public RockPaperScissors {
public:
  MOCK_METHOD(std::string, getDisplayChoice, (Choice choice), (override));
  MOCK_METHOD(Choice, getRandomChoice, (), (override));
  MOCK_METHOD(WinnerResult, getWinner, (Choice choice1, Choice choice2), (override));

  MockRockPaperScissors() {
    ON_CALL(*this, getDisplayChoice).WillByDefault([this](Choice choice) {
      return real_.getDisplayChoice(choice);
    });
  }

  RockPaperScissors real_;
};

#endif //ROCK_PAPER_SCISSORS_C___MOCKROCKPAPERSCISSORS_H
