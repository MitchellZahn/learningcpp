#include <iostream>

int main() {
  int num = 10;
  int *ptr = &num;      // A pointer storing the address of num

  std::cout << "Value of num: " << num << std::endl;
  std::cout << "Address of num: " << &num << std::endl;
  std::cout << "Pointer (ptr) holds address: " << ptr << std::endl;
  std::cout << "Value at the pointer (deferencing): " << *ptr << std::endl; 

  // Changing the value using pointer
  *ptr = 20;
  std::cout << std::endl << "After changing value using pointer:" << std::endl;
  std::cout << "Value of num: " << num << std::endl;
  std::cout << "Address of num: " << &num << std::endl;
  std::cout << "Pointer (ptr) holds address: " << ptr << std::endl;
  std::cout << "Value at the pointer: " << *ptr << std::endl;
  
  return 0;
}