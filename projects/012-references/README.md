# Learning Summary

## Introduction
This program introduces me to references in C++. It shows how a reference can act as an alternative name for an existing variable, allowing access and modification of the same value without using memory addresses directly.

## What I Learnt

### References in C++
I learnt that a reference is an alias for another variable. It does not have its own memory location but instead refers to the same memory as the original variable. In this program, I declared a reference to an integer like this:

```cpp
int a = 10;
int &ref = a;
```
Here, `ref` refers to `a`. Both represent the same value stored in memory.
```cpp
std::cout << "Value of a: " << a << std::endl;
std::cout << "Value of ref: " << ref << std::endl;
```
Both lines display the same value because `a` and `ref` are effectively the same variable.

### Changing Values Through a Reference
I learnt that changing the value of a reference also changes the original variable because they both refer to the same memory location.
```cpp
ref = 20;
```
After this line, both `a` and `ref` show the updated value `20`:
```cpp
std::cout << "Value of a: " << a << std::endl;
std::cout << "Value of ref: " << ref << std::endl;
```
This shows how references can be used to modify data easily and safely without needing pointer syntax.

### Key Points About References
From this exercise, I discovered that:
- A reference must be initialised when it is declared
- A reference cannot be null
- A reference cannot be changed to refer to another variable
- Any change made through a reference also changes the original variable

## Conclusion
Through this program, I learnt that references in C++ provide a simple and safe way to access and modify data. They are useful when passing variables to functions or when I want to avoid copying data. Understanding references helps me write cleaner and more efficient C++ programs.