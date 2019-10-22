#include "RockPaperScissors.h"

std::string RockPaperScissors::getDisplayChoice(Choice choice) {
  switch (choice) {
    case ROCK:
      return "Rock";
    case PAPER:
      return "Paper";
    case SCISSORS:
      return "Scissors";
    default:
      return "";
  }
}

Choice RockPaperScissors::getRandomChoice() {
  return static_cast<Choice>(random() % 6);
}
