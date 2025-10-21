# Understanding C++ Comments

## Introduction
This project continues my journey into learning the fundamentals of C++ programming.
In this lesson, I explored C++ comments, which are used to make notes inside the source code.
Comments are ignored by the compiler, but they play a crucial role in helping programmers understand, maintain, and debug their code.

---

## What I learnt

### 1. What Are Comments
A comment is a programmer-readable note written inside the source code.
Its purpose is to describe what the code does, how it works, or why certain choices were made.
The compiler completely ignores comments, they exist solely for humans.

Here’s the full code:
```cpp
#include <iostream>

int main() {
  // Comments like this will be ignored
  std::cout << "Hello world!" << std::endl;

  /* Multi-line
   * comments like this
   * will also be ignored 
   */

  return 0;
}
```
In this program, there are two types of comments:
1. A single-line comment that begins with `//`
2. A multi-line comment that begins with `/*` and ends with `*/`
Both types are used to leave notes in the code, but they behave slightly differently.

---

### 2. Single-Line Comments
Single-line comments start with `//`.
Everything from the `//` to the end of that line is ignored by the compiler.
For example:
```cpp
std::cout << "Hello world!"; // This is a single-line comment
```
Single-line comments are commonly used for short notes beside code, such as quick explanations or reminders.

However, when code lines are long, placing comments at the end of the line can make the code messy and hard to read.
A clearer approach is to place the comment above the statement:
```cpp
// Display a greeting message
std::cout << "Hello world!" << std::endl;
```
This keeps the code neat and easier to understand.

---

### 3. Multi-Line Comments
Multi-line comments begin with `/*` and end with `*/`.
Everything between these symbols is ignored by the compiler, even across multiple lines.

Example:
```cpp
/* This is a multi-line comment.
   It can span several lines.
   Everything inside is ignored. */
```
This style is ideal for writing longer explanations, describing algorithms, or temporarily commenting out multiple lines of code.

A common formatting style aligns asterisks for readability:
```cpp
/* This is a multi-line comment.
 * Matching asterisks make it easy to read.
 */
```
One important rule: multi-line comments cannot be nested.
If you try something like:
```cpp
/* This is a comment /* inside another comment */ */
```
The compiler will get confused and throw an error, because it stops ignoring text at the first */.

---

### 4. Proper Use of Comments
Comments should serve a clear purpose. They are most effective when used to describe what, how, or why.

- What: Describe what a program or function does
```cpp
// This program displays a greeting message
```

- How: Explain how the code achieves something
```cpp
/* To calculate the final health, we sum all the damage taken
   and then multiply by the player's damage resistance. */
```

- Why: Justify design or logic decisions
```cpp
// Multiply quantity by 2 because items are sold in pairs
cost = quantity * 2 * price;
```
A good comment adds context and intent, while a bad comment simply repeats what the code already says.

Bad example:
```cpp
// Set value to 0
value = 0;
```

Good example:
```cpp
// Reset the counter after each test
value = 0;
```

---

### 5. Commenting Out Code
Sometimes, you may want to temporarily disable code without deleting it.
This is called commenting out code.

Example:
```cpp
// std::cout << "This line is disabled";
```

For multiple lines:
```cpp
/*
std::cout << "Line 1";
std::cout << "Line 2";
std::cout << "Line 3";
*/
```
This technique is helpful for debugging, isolating errors, or experimenting with new code.

---

## Advantages of This Lesson
1. **Improved Readability**: Comments make code easier to understand for both the author and others.
2. **Better Maintenance**: Clear explanations help when updating or fixing code later.
3. **Debugging Aid**: Commenting out code helps isolate problems without deleting code.
4. **Professional Practice**: Good commenting habits are valued in collaborative programming environments.

---

## Conclusion
Learning how to write comments in C++ has shown me that writing code isn’t just about making a program work, it’s also about making it understandable.
Comments are invisible to the compiler but invaluable to humans.
They explain what the code does, how it works, and why it exists, making collaboration, debugging, and future maintenance far easier.
As I continue learning C++, I’ll make sure to write clear, meaningful comments that make my programs readable.