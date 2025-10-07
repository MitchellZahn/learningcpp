#include <iostream>
#include <string>   // Provides support for using the std::string type

int main() {
  std::string name; // Declare a string variable to store the user's name

  // Prompt the user to enter their name
  std::cout << "Enter your name: ";
  std::cin >> name;

  // Display messages that incorporates the user's name
  std::cout << "Wake up, " << name << "..." << std::endl; // std::endl is the same and "\n" (Go to a new line)
  std::cout << "The Matrix has you..." << std::endl;
  std::cout << "Follow the white rabbit." << std::endl;
  std::cout << "Knock, knock, " << name << "." << std::endl;

  return 0;
}