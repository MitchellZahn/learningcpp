# Learning Summary

## Introduction
This program is my first step into writing and running C++ code. It shows me the basic structure of a C++ program and how to produce simple output on the screen. 

## What I Learnt

### Structure of a C++ Program
I learnt that every C++ program begins execution from the `main` function. The program I wrote included the `main` function, which is the entry point.

```cpp
int main() {
    // code here
    return 0;
}
```
The `int` means that the function returns an integer value. Returning `0` tells the operating system that the program finished successfully.

### Using Libraries

I learnt how to include a library with the `#include` directive. In this case I used the standard input output stream library:
```cpp
#include <iostream>
```
This library provides tools for input and output, including `std::cout` for printing text to the console.

### Output to the Console
I learnt how to display text on the screen with:
```cpp
std::cout << "Hello World!";
```
Here, `std::cout` is used to output data. The `<<` operator sends the text to the standard output stream, which by default is my terminal or console.

### Compilation and Execution

By writing this code, I also learnt the typical workflow of a C++ program:

1. Write the code in a `.cpp` file
2. Compile the code using a C++ compiler
3. Run the program to see the output

## Conclusion
With this program, I learnt the fundamental building blocks of C++:

- Every program must have a `main` function
- Libraries such as `iostream` provide useful tools
- `std::cout` prints text to the console
- `return 0;` indicates successful completion

This is the foundation for me to write more complex C++ programs.