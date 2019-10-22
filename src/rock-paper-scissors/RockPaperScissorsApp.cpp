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
  auto playersChoice = mapInputToChoice(inputChoice);
  auto iasChoice = rockPaperScissors->getRandomChoice();
  std::cout << "Player's choice: " << rockPaperScissors->getDisplayChoice(playersChoice) << std::endl;
  std::cout << "IA's choice: " << rockPaperScissors->getDisplayChoice(iasChoice) << std::endl;
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
