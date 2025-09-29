#include <iostream>

int main() {
  int x = 10;
  int y = 3;

  // Arithmetic operators
  std::cout << x << "+" << y << "=" << (x+y) << "\n";       // Addition
  std::cout << x << "-" << y << "=" << (x-y) << "\n";       // Subtraction
  std::cout << x << "*" << y << "=" << (x*y) << "\n";       // Multiplication
  std::cout << x << "/" << y << "=" << (x/y) << "\n";       // Division
  std::cout << x << "%" << y << "=" << (x%y) << "\n";       // Modulus (remainder)

  // Relational (comparison) operators
  std::cout << x << "=" << y << "? " << (x==y) << "\n";     // Equal to
  std::cout << x << "!=" << y << "? " << (x!=y) << "\n";    // Not equal to
  std::cout << x << ">" << y << "? " << (x>y) << "\n";      // Greater than
  std::cout << x << "<" << y << "? " << (x<y) << "\n";      // Less than
  std::cout << x << ">=" << y << "? " << (x>=y) << "\n";    // Greater than or equal to
  std::cout << x << "<=" << y << "? " << (x<=y) << "\n";    // Less than or equal to

  bool a = true;
  bool b = false;

  // Logical operators
  std::cout << "!a=" << (!a) << "\n";                       // Logical NOT
  std::cout << a << "&&" << b << "=" << (a && b) << "\n";   // Logical AND
  std::cout << a << "||" << b << "=" << (a || b) <<"\n";    // Logical OR

  // Bitwise operators
  std::cout << a << "&" << b << "=" << (a&b) << "\n";       // Bitwise AND
  std::cout << a << "|" << b << "=" << (a|b) << "\n";       // Bitwise OR
  std::cout << a << "^" << b << "=" << (a^b) << "\n";       // Bitwise XOR
  std::cout << "~" << a << "=" << (~a) << "\n";             // Bitwise NOT
  std::cout << a << " << 1 = " << (a << 1) << "\n";         // Left shift
  std::cout << a << " >> 1 = " << (a >> 1) << "\n";         // Right shift

  int c = 5;
  c += 2; // Equivalent to c = c + 2
  std::cout << "c after c += 2 = " << c << "\n";

  return 0;
  
}