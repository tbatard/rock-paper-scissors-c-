#include <random>
#include <iostream>
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
  std::random_device random_device;
  std::mt19937 engine{random_device()};
  std::uniform_int_distribution<> dist(1,3);

  return static_cast<Choice>(dist(engine));
}

WinnerResult RockPaperScissors::getWinner(Choice choice1, Choice choice2) {
  if (isChoice1(choice1, choice2)) {
    return CHOICE1;
  } else if (isChoice2(choice1, choice2)) {
    return CHOICE2;
  }

  return DRAW;
}

bool RockPaperScissors::isChoice1(const Choice &choice1, const Choice &choice2) {
  return (choice1 == SCISSORS && choice2 == PAPER)
         || (choice1 == PAPER && choice2 == ROCK)
         || (choice1 == ROCK && choice2 == SCISSORS);
}

bool RockPaperScissors::isChoice2(const Choice &choice1, const Choice &choice2) {
  return (choice1 == SCISSORS && choice2 == ROCK)
         || (choice1 == PAPER && choice2 == SCISSORS)
         || (choice1 == ROCK && choice2 == PAPER);
}
