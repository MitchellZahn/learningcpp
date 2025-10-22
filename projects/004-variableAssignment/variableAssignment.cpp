#include <iostream>

int main() {
  int a = 19;
  float b = 3.1415926;
  char c = 'E';
  double d = 3.141592653589793;
  bool e = true;

  std::cout << a << std::endl;  // outputs the integer value 19
  std::cout << b << std::endl;  // outputs the float value 3.14159
  std::cout << c << std::endl;  // outputs the character 'E'
  std::cout << d << std::endl;  // outputs the double value 3.14159
  std::cout << e << std::endl;  // outputs 1 (true is represented as 1 in C++)

  return 0;
}