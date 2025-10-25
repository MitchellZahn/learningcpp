#include <iostream>

int getNumberFromUser() {
  std::cout << "Pick a number: ";
  int input{};
  std::cin >> input;

  return input; // This sends the user's number back to the caller
}

int main() {
  int x{ getNumberFromUser() }; // return value stored in x
  int y{ getNumberFromUser() }; // return value stored in y

  std::cout << "You picked " << x << " and " << y << '\n';

  return 0;
}