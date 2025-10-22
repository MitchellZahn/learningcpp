# Understanding C++ Data Types

## Introduction
This project continues my journey into learning the fundamentals of C++ programming.
In this lesson, I learned about data types, which determine the kind of information a program can store and manipulate.
Every variable in C++ must have a type so that the compiler knows how much memory to allocate and how to interpret the stored value.

---

## What I learnt

### 1. What Are Data Types
A data type defines the kind of value a variable can hold and how that value is represented in memory.
Without data types, a program would not know how to interpret raw data like numbers or characters.

Here’s the full code:
```cpp
#include <iostream>

int main() {
  int a;      // Integer (whole numbers, e.g., 1, -5, 42)
  float b;    // Floating-point numbers (decimal numbers, ~7 digits of precision)
  char c;     // Character (e.g., 'R', 'E', 'X')
  double d;   // Double-precision floating-point numbers (~15 digits of precision)
  bool e;     // Boolean (true or false)

  return 0;
}
```
Each variable here is defined with a data type that determines what kind of value it can store.

---

### 2. The Purpose of Data Types
When we create a variable, the data type tells the compiler:
1. How much memory to reserve.
2. How to interpret the stored bits as a meaningful value.
3. What operations can be safely performed on the value.
For example:
```cpp
int age = 25;        // Stores a whole number
double price = 9.99; // Stores a decimal number
char grade = 'A';    // Stores a single character
bool passed = true;  // Stores a true or false value
```
If you try to store text in an integer variable, the compiler will throw an error, since the types do not match.

---

### 3. Common Built-In Types in C++
C++ provides several basic data types:
| Type | Meaning | Example |
|---|---|---|
| `int` | Integer (whole numbers) | `int score = 100;` |
| `float` | Floating-point (decimal with ~7 digits precision) | `float pi = 3.14f;` |
| `double` | Double-precision floating-point (~15 digits precision) | `double gravity = 9.80665;` |
| `char` | Single character | `char symbol = '$';` |
| `bool` | Boolean (true or false) | `bool isFinished = false;` |
Each of these types plays a key role in handling specific kinds of data.

---

### 4. Objects and Variables
An object in C++ represents a region of memory that can store a value.
A variable is an object that has a name. We define variables so we can store, modify, and retrieve data during program execution.

Example:
```cpp
int x; // Defines a variable named x of type int
```
At runtime, memory is allocated for `x`, and it can store integer values.

---

### 5. Defining Multiple Variables
You can define multiple variables of the same type in one statement:
```cpp
int a, b; // Both are integers
```
However, it is considered best practice to define each variable on its own line for clarity:
```cpp
int a; // First integer variable
int b; // Second integer variable
```

---

### 6. How Data Types Affect Memory
Each data type uses a different amount of memory. For example:
- `int` typically uses 4 bytes
- `float` uses 4 bytes
- `double` uses 8 bytes
- `char` uses 1 byte
- `bool` uses 1 byte
The compiler uses this information to manage memory efficiently and to ensure type safety in operations.

---

## Advantages of This Lesson
1. **Understanding Data Representation**: Learned how values are stored and interpreted by the computer.
2. **Memory Awareness**: Gained insight into how different types consume memory.
3. **Code Reliability**: Learned that correct type usage prevents type-related errors.
4. **Foundation for Complex Topics**: This lesson sets the groundwork for variables, expressions, and data manipulation.

---

## Conclusion
Learning about C++ data types has shown me that every piece of data in a program must have a clearly defined type.
Data types tell the compiler how much space to allocate, how to interpret stored values, and what operations are valid.
By using the correct data types, we write programs that are efficient, reliable, and easy to maintain.