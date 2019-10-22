#include <iostream>
#include "RockPaperScissorsApp.h"

void RockPaperScissorsApp::start(std::istream& input) {
  std::cout << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "** ROCK PAPER SCISSORS **" << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << std::endl;
  std::cout << "Choose:" << std::endl;
  for (int index = ROCK; index <= SCISSORS; index++ )
  {
    auto choice = static_cast<Choice>(index);
    std::cout << index << ": " << rockPaperScissors->getDisplayChoice(choice) << std::endl;
  }
  std::cout << "Your choice: ";
  int inputChoice = 0;
  input >> inputChoice;
  auto choice = static_cast<Choice>(inputChoice);
  std::cout << rockPaperScissors->getDisplayChoice(choice);
}
