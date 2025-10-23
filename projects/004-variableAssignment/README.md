# Understanding Variable Assignments in C++

## Introduction
This project continues my journey of fundamental C++ concepts.  
In this project, I learnt about variable assignments, which are used to give values to variables after they have been defined.  
Assignments are one of the most basic and essential parts of programming because they allow us to store, modify, and reuse values as the program runs.

---

## What I learnt

### 1. What Is Variable Assignment
Variable assignment is the process of giving a value to a variable after it has been defined.  
We use the assignment operator (`=`) to store a value in a variable.  
The value on the right-hand side is copied into the variable on the left-hand side.

Here’s the full code:
```cpp
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
```
This program defines five variables of different data types and assigns a value to each one.  
We then use `std::cout` to print their values on separate lines.  
In future projects, we will also discuss how `setprecision()` can be used to display all the digits in a floating-point number when printing, since doubles can store many decimal places by default.

---

### 2. How Assignments Work in Execution
When the program runs, C++ allocates memory for each variable, and the assignment operator stores the value there.  
If you assign a new value later, the old one is replaced.
For example:
```cpp
int width;
width = 5;
std::cout << width << std::endl;

width = 7;
std::cout << width << std::endl;

```
Output:
```cpp
5
7
```
The second assignment overwrites the first value.

---

### 3. Variable Initialization
Assignment can also happen immediately when the variable is created.  
This is called initialization and it ensures that the variable starts with a defined value.
```cpp
int a = 5;     // copy-initialization
int b(6);      // direct-initialization
int c{7};      // direct-list-initialization (preferred)
int d{};       // value-initialization (sets to 0)
```
Uninitialized variables contain unpredictable values (called garbage values), so it is best to always initialize your variables.

---

### 4. Common Mistake: `=` vs `==`
A common mistake among beginners is confusing assignment (`=`) with equality (`==`).  
`=` assigns a value, while `==` compares two values.

Example:
```cpp
int x = 5;      // assignment
if (x == 5) {   // equality comparison
    std::cout << "x is 5";
}
```

---

### 5. Best Practices
1. Always initialize your variables when you define them.
2. Use `{}` (list-initialization) whenever possible to avoid narrowing conversions.
3. Be careful not to mix up assignment (`=`) and comparison (`==`).
4. Define one variable per line for clarity.

---

## Advantages of This Lesson
1. **Understanding Variable Behavior**: Learnt how variables store and update values during program execution.
2. **Initialization Awareness**: Gained an understanding of how initialization ensures variables have defined values.
3. **Error Prevention**: Recognized how proper assignments and initializations prevent unpredictable results.

---

## Conclusion
Learning about variable assignments taught me how values move and change during program execution.  
Assignments form the foundation of logic and state in C++.  
Understanding how to properly assign and initialize variables helps create code that is reliable and easy to follow.  
In future projects, I will explore how `setprecision()` can be used to improve the accuracy and readability of numerical output when working with floating-point number variables.