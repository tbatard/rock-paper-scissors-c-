#include <iostream>
#include "RockPaperScissorsApp.h"

void RockPaperScissorsApp::start(std::istream& input) {
  std::cout << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "** ROCK PAPER SCISSORS **" << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << std::endl;
  std::cout << "Choose:" << std::endl;

  this->displayChoices();

  std::cout << "Your choice: ";
  int inputChoice = 0;
  input >> inputChoice;
  auto choice = mapInputToChoice(inputChoice);
  std::cout << rockPaperScissors->getDisplayChoice(choice);
}

void RockPaperScissorsApp::displayChoices() {
  for (int index = ROCK; index <= SCISSORS; index++ )
  {
    auto choice = static_cast<Choice>(index);
    std::cout << index + 1 << ": " << rockPaperScissors->getDisplayChoice(choice) << std::endl;
  }
}

Choice RockPaperScissorsApp::mapInputToChoice(int input) {
  return static_cast<Choice>(--input);
}
