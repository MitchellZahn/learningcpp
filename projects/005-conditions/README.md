# Learning Summary

## Introduction
This program introduces me to conditions in C++. Conditions allow the program to make decisions. The program can check if something is true or false and then choose what to do next.

## What I Learnt

### Writing a basic condition
I learnt how to write an `if` statement to test whether something is true. For example, in this program I wrote:

```cpp
if (x > 0) {
  std::cout << x << " is a positive number";
```
This makes the program check if the value of `x` is greater than zero. If the condition is true, the program runs the code inside the curly braces.

### Adding an alternative path

I also learnt how to use `else if` and `else` to handle other cases:
```cpp
if (x > 0) {
  std::cout << x << " is a positive number";
} else if (x < 0) {
  std::cout << x << " is a negative number";
} else {
  std::cout << x << " is zero";
}
```
With this structure, the program checks each condition in order. Only one block of code will run, depending on the value of `x`.

### Compilation and Execution

The program was written, compiled, and run in the usual way. This time, the output changed depending on the value stored in the variable.

## Conclusion
With this program I learnt that:

- An `if` statement checks whether something is true before running code
- `else if` and `else` allow me to cover other possible cases
- Comparison operators are used to test values inside conditions

This is the first step in creating programs that behave differently depending on the situation.