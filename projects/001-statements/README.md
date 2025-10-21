# Understanding the Structure of a Program

## Introduction
This project is my first step into learning the fundamentals of C++ programming.  
I created a simple program that outputs a greeting message: **"Hello world!"** to the console.  
While simple, this program introduces several essential concepts in C++, such as statements, functions, syntax, and how a C++ program is structured.

---

## What I learnt

### 1. The Structure of a C++ Program
A C++ program is made up of **statements** and **functions**, and every program must have a special function called `main()`.  
The statements inside `main()` are executed in order from top to bottom.

Here’s the full code:
```cpp
#include <iostream>

int main() {
  std::cout << "Hello world!" << std::endl;

  return 0;
}
```
Let’s break it down:
- `#include <iostream>` This line is a preprocessor directive.
It tells the compiler to include the standard input/output stream library, which allows us to use `std::cout` to print text.
- `int main()` This defines the main function, which is where every C++ program begins execution.
- `{ ... }` Curly braces define the function body. All the statements inside are part of the main function.
- `std::cout << "Hello world!" << std::endl;` This is an output statement.
  - `std` stands for “standard”, which refers to the C++ Standard Library namespace.
  - `cout` stands for "character output".
  - The `<<` operator sends data to the output stream.
  - `"Hello world!"` is the message we want to display.
  - `std::endl` inserts a newline after the message.
- `return 0;` This is a return statement that sends a value back to the operating system.
Returning `0` means “program executed successfully”.

---

### 2. Understanding Statements
In C++, a statement is an instruction that performs an action.
Most statements end with a semicolon (`;`).
For example:
```cpp
std::cout << "Level up!" << std::endl;
```
Each statement tells the computer what to do, such as displaying text.

If you forget the semicolon, the compiler will produce a syntax error.

---

### 3. Syntax and Errors
Just like English grammar, C++ has syntax rules that define how programs must be written.
If we forget a semicolon:
```cpp
std::cout << "Level up!" << std::endl
```
The compiler will throw an error, indicating that it expected a semicolon.

This helps me understand how compilers enforce structure and how errors are reported.

---

## Advantages of This Program
1. **Foundation for Learning**: The “Hello World” program is the foundation for understanding how all C++ programs are structured.
2. **Introduces Core Concepts**: It covers key ideas like statements, syntax, functions, and output.
3. **Error Awareness**: Experimenting with mistakes (like missing semicolons) teaches how the compiler communicates problems.

---

## Conclusion
This simple “Hello World” program may be small, but it introduces the building blocks of all C++ programming.
From preprocessor directives to statements, syntax, and the main function, every part plays a crucial role in how C++ code is executed.