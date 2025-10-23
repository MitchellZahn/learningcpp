# Understanding C++ Arithmetic Operators

## Introduction
This project continues my journey into learning the fundamentals of C++.  
In this lesson, I learnt about arithmetic operators, which are used to perform mathematical operations on values. These operators form the basis of almost every program that performs calculations or manipulates numerical data.

Arithmetic operators allow us to add, subtract, multiply, divide, and find remainders. They also let us increase or decrease a variable’s value efficiently using increment and decrement operators. Understanding how these operators work is essential for writing programs that can process and manipulate numeric information correctly.

---

## What I learnt

### 1. What Are Arithmetic Operators
Arithmetic operators perform mathematical operations on operands.  
They are used with both integer and floating point types (except for the modulo operator, which works only with integers).

Here’s the full code:
```cpp
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
```
This program demonstrates how arithmetic operators work.  
For example, addition combines two operands, subtraction finds their difference, and division produces a quotient. The modulo operator returns the remainder of a division, while increment and decrement adjust variable values by one.

---

### 2. Basic Arithmetic Operators
C++ supports several arithmetic operators, each serving a specific mathematical function.
| Operator | Meaning | Example | Result |
|---|---|---|---|
| `+` | Addition | `8 + 3` | 11 |
| `-` | Subtraction | `8 - 3` | 5 |
| `*` | Multiplication | `8 * 3` | 24 |
| `/` | Division | `8 / 3` | 2 |
| `%` | Modulo (remainder) | `8 % 3` | 2 |

The modulo operator (`%`) is only valid for integers. Other arithmetic operators can be used with both integers and floating point values.

---

### 3. Integer and Floating Point Division
When both operands are integers, division returns an integer result, discarding any remainder.  
Example:
```cpp
int a{8};
int b{3};
std::cout << a / b << '\n';
```
Output:
```cpp
2
```
If at least one operand is a floating point value, the division produces a precise decimal result:
```cpp
double c{8.0};
int d{3};
std::cout << c / d << '\n';
```
Output:
```cpp
2.66667
```

---

### 4. The Modulo Operator
The modulo operator (`%`) gives the remainder after integer division. It is often used to determine even or odd numbers, cycle through ranges, or perform clock-like calculations.  
Example:
```cpp
int a{8};
int b{3};
std::cout << a % b << '\n';
```
Output:
```cpp
2
```
Attempting to use the modulo operator with floating point numbers will cause a compiler error.

---

### 5. Increment and Decrement Operators
Increment (`++`) and decrement (`--`) are shorthand operators that increase or decrease a variable’s value by one.  
They come in two forms:
| Operator | Type | Description |
|---|---|---|
| `++x` | Pre-increment | Increments first, then uses the value |
| `x++` | Post-increment | Uses the value first, then increments |
| `--x` | Pre-decrement | Decrements first, then uses the value |
| `x--` | Post-decrement | Uses the value first, then decrements |

---

### 6. Operator Precedence and Parentheses
C++ evaluates expressions according to operator precedence.  
Multiplication, division, and modulo have higher precedence than addition and subtraction.  
Parentheses can be used to control the order of evaluation explicitly.  
Example:
```cpp
int result1{2 + 3 * 4};
int result2{(2 + 3) * 4};
```
Output:
```cpp
14
20
```
Using parentheses improves code readability and ensures expressions behave as intended.

---

## Advantages of This Lesson
1. **Mathematical Foundation**: Learnt how to perform basic arithmetic in C++.
2. **Precision Awareness**: Understood the difference between integer and floating point division.
3. **Efficient Updates**: Learnt how to use increment and decrement for quick adjustments.
4. **Operator Control**: Gained understanding of precedence and how parentheses affect expression order.
5. **Type Safety**: Learnt that modulo should only be used with integer types.

---

## Conclusion
In this lesson, I learnt how arithmetic operators allow C++ programs to perform calculations and manipulate numerical data effectively.  
By understanding how to use addition, subtraction, multiplication, division, modulo, and increment/decrement, I can now perform mathematical operations confidently.  
Learning the difference between integer and floating point division, along with operator precedence, helps ensure accuracy and predictability in calculations.  
This knowledge provides a strong foundation for writing logical, data-driven programs that rely on arithmetic expressions.