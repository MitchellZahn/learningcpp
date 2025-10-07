#include <iostream>

int main() {
  // Declare and initialize an array
  int numbers[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

  // Print array elements
  std::cout << "Array Elements: ";
  for (int i = 0; i < 9; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << "\n";

  // Modify array elements (example: multiply each by 2)
  for (int i = 0; i < 9; i++) {
    numbers[i] *= 2;
  }

  // Print modified array
  std::cout << "Modified Array Elements (multiplied by 2): ";
  for (int i = 0; i < 9; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << "\n";

  // Taking user input into an array
  int userNumbers[3];
  std::cout << "Enter 3 numbers: ";
  for (int i = 0; i< 3; i++) {
    std::cin >>userNumbers[i];
  }

  std::cout << "You entered: ";
  for (int i = 0; i < 3; i++) {
    std::cout << userNumbers[i] << " ";
  }
  std::cout << "\n";

  return 0;
}