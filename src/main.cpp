#include <iostream>
#include "rock-paper-scissors/RockPaperScissors.h"

int main() {
  std::cout << "*************************" << std::endl;
  std::cout << "** ROCK PAPER SCISSORS **" << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << std::endl;
  std::cout << "Choose:" << std::endl;
  std::cout << "1: ROCK" << std::endl;
  std::cout << "2: PAPER" << std::endl;
  std::cout << "3: SCISSORS" << std::endl;
  std::cout << "Your choice: ";
  int input = 0;
  std::cin >> input;
  auto choice = static_cast<Choice>(--input);
  std::cout << RockPaperScissors::getDisplayChoice(choice);

  return 0;
}