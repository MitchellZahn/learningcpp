#include <iostream>

// Define a function named partB with no parameters and no return value
void partB() {
  std::cout << "In partB()" << '\n';
}

// Define another function named partA with no parameters and no return value
void partA() {
  std::cout << "Starting partA()" << '\n';

  partB();  // Call the function partB() from inside partA

  std::cout << "Ending partA()" << '\n';
}

// The main function, the entry point of every C++ program
int main() {
  std::cout << "Starting main()" << '\n';

  partA();  // Call partA() from main

  std::cout << "Ending main()" << '\n';

  return 0;
}