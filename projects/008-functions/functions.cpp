#include <iostream>

// Function that adds two numbers
int add(int a, int b) {
    return a + b;
}

// Function that prints "Hello World!"
void hello() {
    std::cout << "Hello World!" << "\n";
}

// Function that checks if a number is even
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
  // Call the hello function
  hello();

  // Call the add function
  int sum = add(7, 2);
  std::cout << "7+2=" << sum << "\n";

  // Call the isEven function
  int number = 4;
  if (isEven(number)) {
    std::cout << number << " is even" << "\n";
  } else {
    std::cout << number << " is odd" << "\n";
  }
  return 0;
}