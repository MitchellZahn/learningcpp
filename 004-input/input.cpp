#include <iostream>

int main() {
  // Declare variables to store user input
  int x;
  int y;

  // Prompt user to enter a number and read it into x
  std::cout << "Pick a number: ";
  std::cin >> x;

  // Prompt user to enter another number and read it into y
  std::cout << "Pick another number: ";
  std::cin >> y;

  // Output the sum in the form of "x+y=result"
  std::cout << x << "+" << y << "=" << (x+y);

  // Return 0 indicates successful program completion
  return 0;
}