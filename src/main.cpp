#include <iostream>
#include "rock-paper-scissors/RockPaperScissors.h"
#include "rock-paper-scissors/RockPaperScissorsApp.h"

int main() {
  RockPaperScissors rockPaperScissors;
  auto rockPaperScissorsApp = new RockPaperScissorsApp(&rockPaperScissors);
  rockPaperScissorsApp->start(std::cin);

  return 0;
}