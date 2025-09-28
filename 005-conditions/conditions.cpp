#include <iostream>

int main() {
  int x;

  std::cout << "Pick a number: ";
  std::cin >> x;

  // Check if x is greather than 0. If true, print that x is a positive number
  if(x>0) {
    std::cout << x << " is a positive number";
  }
  
  // If the first condition is false, check if x is less than 0. If true, print that x is a negative number
  else if (x<0) {
    std::cout << x << " is a negative number";
  } 
  
  // If neither of the above conditions are true, x must be 0
  else {
    std::cout << x << " is zero";
  }
}