#include <iostream>

int main() {
  int x{8};
  int y{3};

  // Addition
  std::cout << "x + y = " << (x + y) << '\n';

  // Subtraction
  std::cout << "x - y = " << (x - y) << '\n';

  // Multiplication
  std::cout << "x * y = " << (x * y) << '\n';

  // Division
  std::cout << "x / y = " << (x / y) << '\n';

  // Modulo
  std::cout << "x % y = " << (x % y) << '\n';

  // Increment
  std::cout << "++x = " << ++x << '\n';

  // Decrement
  std::cout << "--y = " << --y << '\n';

  return 0;
}