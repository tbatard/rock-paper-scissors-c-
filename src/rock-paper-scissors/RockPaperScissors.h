#ifndef ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H
#define ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H

#include <string>

enum Choice {
  ROCK, PAPER, SCISSORS
};

enum WinnerResult {
  CHOICE1 = -1,
  DRAW = 0,
  CHOICE2 = 1
};

class RockPaperScissors {
private:

  static bool isChoice1(const Choice &choice1, const Choice &choice2);

  static bool isChoice2(const Choice &choice1, const Choice &choice2);

public:
  virtual std::string getDisplayChoice(Choice choice);

  virtual Choice getRandomChoice();

  virtual WinnerResult getWinner(Choice choice1, Choice choice2);
};


#endif //ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H
