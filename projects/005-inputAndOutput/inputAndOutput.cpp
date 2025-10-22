#include <iostream> // Include the input/output stream library for using std::cin and std::cout

int main() {
  // Prompt the user to enter three numbers
  std::cout << "Enter three numbers: ";

  // Declare an integer variable x and initialize it to 0
  int x{};
  // Take input for the first number from the user
  std::cin >> x;

  // Declare an integer variable y and initialize it to 0
  int y{};
  // Take input for the second number from the user
  std::cin >> y;

  // Declare an integer variable z and initialize it to 0
  int z{};
  // Take input for the third number from the user
  std::cin >> z;

  // Display the three numbers entered by the user
  std::cout << "You entered " << x << ", " << y << " and " << z << '\n';

  return 0;
}