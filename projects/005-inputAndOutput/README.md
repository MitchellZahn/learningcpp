# Understanding C++ Input and Output

## Introduction
This project continues my learning journey into the fundamentals of C++.  
Before diving into user input and output, we need to take a step back and discuss something we have been using since Lesson 1 but never actually explained: `#include <iostream>`.

The line `#include <iostream>` tells the compiler to include the input/output stream library, which is part of the C++ standard library. This library allows programs to perform input and output operations, such as printing text to the screen or reading data from the keyboard. The term iostream stands for input/output stream, meaning it handles both incoming data (input) and outgoing data (output).

Without including this header file, we would not be able to use `std::cout` for output or `std::cin` for input.

---

## What I learnt

### 1. What Are Input and Output
Input and output (I/O) operations allow a program to interact with the user.  
Output sends information from the program to the user, for example, displaying text on the screen.  
Input allows the user to provide information to the program, for example, typing numbers on the keyboard.

Here’s the full code:
```cpp
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
```
This program uses `std::cout` to display a message and `std::cin` to read three integer inputs from the user. It then prints the results back using `std::cout`.

---

### 2. Using std::cout for Output
`std::cout` (character output) is used to print text and data to the console.  
The insertion operator `<<` sends data to the output stream.  
For example:
```cpp
std::cout << "Hello world!";
```
This displays:
```cpp
Hello world!
```
Multiple outputs can be chained using multiple insertion operators:
```cpp
std::cout << "The number is " << 7;
```
Output:
```cpp
The number is 7
```
To move the cursor to a new line, we can use either:
- `std::endl`, which ends the line and flushes the output buffer; or
- `'\n'`, which inserts a newline character without flushing (this is faster and preferred).
Example:
```cpp
std::cout << "First line\nSecond line\n";
```
Output:
```cpp
First line
Second line
```

---

### 3. Using std::cin for Input
`std::cin` (character input) reads data entered by the user.  
The extraction operator `>>` takes data from the input stream and stores it in a variable.  
Example:
```cpp
int number{};
std::cout << "Enter a number: ";
std::cin >> number;
std::cout << "You entered " << number << '\n';
```
If the user types `8`, the program outputs:
```cpp
Enter a number: 8
You entered 8
```
Multiple values can also be input in a single line, separated by spaces:
```cpp
int a{}, b{};
std::cin >> a >> b;
```
Input:
```cpp
5 10
```
Output:
```cpp
You entered 5 and 10
```

---

### 4. Understanding std::endl and '\n'
Both `std::endl` and `'\n'` move the cursor to a new line, but there is a difference.  
`std::endl` flushes the output buffer, which can slow performance if used too frequently.  
`'\n'` just prints a newline character, and is therefore recommended in most cases.

Best practice:  
Use `'\n'` unless you specifically need to flush the buffer.

---

### 5. The Concept of Buffering
When you output data using `std::cout`, it does not always appear on the screen immediately.  
Instead, it is temporarily stored in a buffer, which is a small area of memory that collects output data before sending it to the console.  
Flushing the buffer sends all pending output to the screen.

Similarly, `std::cin` uses an input buffer that temporarily holds what the user types before the program reads it.

This buffering system helps C++ programs run more efficiently by minimizing interactions with the console device, which are relatively slow.

---

### 6. Operators << and >>
It is easy to confuse the two stream operators. Here’s a simple way to remember:
| Operator | Used With | Meaning | Example | Description |
|---|---|---|---|---|
| `<<` | `std::cout` | Insertion | `std::cout << x;` | Sends data to the output stream |
| `>>` | `std::cin` | Extraction | `std::cout >> x;` | Extracts data from the input stream |

Tip: The direction of the arrows shows the direction of data movement.

---

## Advantages of This Lesson
1. **User Interaction**: Learned how to take user input and display results dynamically.
2. **Understanding Streams**: Gained knowledge of how data flows in and out of a program using input and output streams.
3. **Efficiency Awareness**: Understood the importance of buffering and when to use `std::endl` or `'\n'`.
4. **Syntax Confidence**: Became comfortable with the use of `<<` and `>>` operators in programs.

---

## Conclusion
In this lesson, I learned how C++ handles user interaction through the input/output stream library.  
By including `#include <iostream>`, we gain access to tools that allow us to communicate with the user through the console.  
Understanding how to use `std::cout`, `std::cin`, `std::endl`, and `'\n'` helps create interactive and efficient programs.  
This knowledge lays the foundation for future lessons where user input and program output become essential parts of program design.