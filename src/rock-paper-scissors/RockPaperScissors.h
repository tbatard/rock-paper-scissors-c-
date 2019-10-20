#ifndef ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H
#define ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H

#include <string>

enum Choice { ROCK, PAPER, SCISSORS };

class RockPaperScissors {
public:
  static void start();

  static std::string getDisplayChoice(Choice choice);
};


#endif //ROCK_PAPER_SCISSORS_C___ROCKPAPERSCISSORS_H
