# Learning Summary

## Introduction
This program introduces me to variables in C++. It shows me how to declare variables, assign values to them and then use them in calculations. It also builds on my earlier understanding of output by displaying the result of an expression involving variables.

## What I Learnt

### Variables in C++
I learnt that variables are used to store data values in a program. A variable has a type, a name and a value. In this program I used two integer variables:

```cpp
int x = 7;
int y = 3;
```
Here, `int` means that the variables can store whole numbers. `x` is assigned the value `7` and `y` is assigned the value `3`.

### Expressions with Variables

I learnt that variables can be combined in expressions. In this program I added the two integers together:
```cpp
x + y
```
This expression evaluates to `10`. Expressions allow me to perform calculations using the data stored in variables.

### Output with Variables
I learnt how to print variables and the result of expressions to the console. The program displayed the equation and its result:
```cpp
std::cout << x << "+" << y << "=" << (x + y);
```
The `<<` operator sends each part to the output stream in sequence. This means the program prints `7+3=10`.

### Compilation and Execution

Just as before, I followed the same steps to run the program:

1. Write the code in a `.cpp` file
2. Compile the code using a C++ compiler
3. Run the program to see the output

## Conclusion
With this program, I learnt the following key ideas about variables in C++:

- Variables are named storage locations with a type and a value
- Integer variables are declared with `int`
- Variables can be used in expressions to perform calculations
- Variables and expressions can be printed to the console with `std::cout`

This gives me a foundation for working with data in C++ and will help me write more useful and flexible programs.