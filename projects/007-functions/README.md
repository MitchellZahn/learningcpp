# Understanding C++ Functions

## Introduction
This project continues my journey into learning the fundamentals of C++ programming.  
In this lesson, I learnt about functions, which are reusable blocks of code designed to perform specific tasks.  
Functions allow us to organize code into smaller, manageable pieces that are easier to understand, test, and reuse.

---

## What I learnt

### 1. What Are Functions
A function is a collection of statements that perform a specific action.  
Every C++ program must have a function named `main()`, which marks the starting point of program execution.  
As programs become larger, writing all the code inside `main()` becomes messy. Functions help break down logic into smaller, logical sections.

Here’s the full code:
```cpp
#include <iostream>

// Define a function named partB with no parameters and no return value
void partB() {
  std::cout << "In partB()" << '\n';
}

// Define another function named partA with no parameters and no return value
void partA() {
  std::cout << "Starting partA()" << '\n';

  partB();  // Call the function partB() from inside partA

  std::cout << "Ending partA()" << '\n';
}

// The main function, the entry point of every C++ program
int main() {
  std::cout << "Starting main()" << '\n';

  partA();  // Call partA() from main

  std::cout << "Ending main()" << '\n';

  return 0;
}
```
Output:
```cpp
Starting main()
Starting partA()
In partB()
Ending partA()
Ending main()
```
This program shows how one function can call another.  
The program starts in `main()`, calls `partA()`, and then `partA()` calls `partB()`.  
After each function finishes, control returns to the point where it was called, allowing execution to continue in order.

---

### 2. Why Functions Are Useful
Functions make code modular, reusable, and easier to read.  
Instead of repeating code in multiple places, you can define a function once and call it whenever needed.  
This reduces duplication and improves maintainability.  
For example:
```cpp
void printMessage() {
  std::cout << "Hello again!" << '\n';
}

int main() {
  printMessage();
  printMessage(); // The same function is called twice
  return 0;
}
```
Output:
```cpp
Hello again!
Hello again!
```
The same code runs multiple times without having to be rewritten.

---

### 3. Function Structure
A function typically includes two main parts:  
1. **Function header**: tells the compiler the name, return type, and parameters of the function.
2. **Function body**: contains the statements that define what the function does.  

Basic syntax:
```cpp
returnType functionName() {
  // Function body
}
```
For example:
```cpp
void display() {
  std::cout << "Displaying message" << '\n';
}
```
Here,
- `void` means the function does not return a value.
- `display` is the function name.
- The curly braces contain the statements to execute.

---

### 4. Calling Functions
To call a function, write its name followed by parentheses.  
For example, `display();` calls the function named `display`.  
When a function is called:
1. Program execution pauses at the call point.
2. The called function executes its statements.
3. Control returns to the caller after completion.  

If you forget the parentheses, the call will not work properly.

---

### 5. Functions Calling Other Functions
Functions can call other functions.  
This helps create a clear structure where each function focuses on a single task.  
As shown earlier:
```cpp
#include <iostream>

void partB() {
  std::cout << "In partB()" << '\n';
}

void partA() {
  std::cout << "Starting partA()" << '\n';
  partB();
  std::cout << "Ending partA()" << '\n';
}

int main() {
  std::cout << "Starting main()" << '\n';
  partA();
  std::cout << "Ending main()" << '\n';
  return 0;
}
```
Output:
```cpp
Starting main()
Starting partA()
In partB()
Ending partA()
Ending main()
```
Here, `main()` calls `partA()`, which then calls `partB()`.

---

### 6. Function Definition Order
In C++, a function must be defined before it is used.  
If `partA()` is written before `partB()`, and `partA()` tries to call `partB()`, the compiler will not recognize `partB()` yet.  
This happens because C++ reads code from top to bottom.  

Example that causes an error:
```cpp
void partA() {
  partB(); // Error: partB not declared yet
}

void partB() {
  std::cout << "In partB()" << '\n';
}
```
To fix this, you can either:
- Move the definition of `partB()` above `partA()`, or
- Use a forward declaration, which we will learn about in future lessons.

---

### 7. Nested Functions Are Not Allowed
C++ does not support defining one function inside another.  
Each function must be declared independently at the same scope level.  

Example of an error:
```cpp
int main() {
  void inner() {  // Illegal in C++
    std::cout << "Inner" << '\n';
  }
  inner();
  return 0;
}
```
Correct version:
```cpp
#include <iostream>

void inner() {
  std::cout << "Inner" << '\n';
}

int main() {
  inner();
  return 0;
}
```

---

## Advantages of This Lesson
1. **Improved Organization**: Learnt to separate logic into smaller, meaningful parts.
2. **Reusability**: Functions can be called multiple times without rewriting code.
3. **Easier Debugging**: Smaller functions make errors easier to locate.
4. **Code Readability**: Programs are cleaner and more structured.
5. **Understanding Declaration Order**: Learnt that function definitions must appear before use unless declared earlier.

---

## Conclusion
This lesson taught me how functions bring structure and reusability to C++ programs.  
Functions allow us to build modular code that is easy to understand and maintain.  
I also learnt that if one function appears above another, it cannot call the one below it unless that lower function has been declared first.  
Understanding this concept is a key step toward mastering program organization and function interaction in C++.