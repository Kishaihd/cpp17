/*
 * C++17 lets you declare a local variable bound to the 'if' and 'switch' statements' block of code.
 * The scope of the variable used in the 'if' and 'switch' statements will go out of scope in the respectivee blocks.
 */

#include <iostream>

bool isGoodToProceed() {
  return true;
}

bool isGood() {
  return true;
}

void functionWithSwitchStatement() {

  switch (auto status = isGood() ) {
    case true:
      std::cout << "\nAll good!" << std::endl;
    break;
    case false:
      std::cout << "\nSomething isn't right!" << std::endl;
    break;
  }
}

int main() {

  if (auto flag = isGoodToProceed() ) {
    std::cout << "Flag is a local variable and it loses its scope outisde of the 'if' block" << std::endl;
  }

  functionWithSwitchStatement();

  return 0;
}
