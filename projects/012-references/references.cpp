#include <iostream>

int main() {
  int a = 10;
  int &ref = a;

  std::cout << "Value of a: " << a << std::endl;
  std::cout << "Value of ref: " << ref << std::endl;

  ref = 20;

  std::cout << "\nAfter modifying ref: " << std::endl;
  std::cout << "Value of a: " << a << std::endl;
  std::cout << "Value of ref: " << ref << std::endl;

  return 0;
}