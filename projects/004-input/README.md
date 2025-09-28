# Learning Summary

## Introduction
This program introduces me to input in C++. Input allows the program to pause, wait for the user to type something, and then use that value in a calculation or other task.

## What I Learnt

### Asking the user for input
I learnt how to use `std::cout` to show a message that tells the user what to do. In this program I wrote:

```cpp
std::cout << "Pick a number: ";
```
This makes the program ask the user to type a value.

### Reading input

I used `std::cin` to read what the user typed and store it in a variable:
```cpp
std::cin >> x;
```
The same approach was used to store a second number in another variable.

### Using the input in a calculation
After collecting two numbers, I added them together and displayed the full calculation. The program prints the result in the format:
```cpp
x+y=result
```
So if the user enters 4 and 6, the program prints:
```cpp
4+6=10
```

### Compilation and Execution

The program was written, compiled, and run in the usual way. This time, the output depended on what values the user entered.

## Conclusion
With this program I learnt that:

- `std::cout` can be used to ask the user for input
- `std::cin` reads what the user types and stores it in a variable

This is the first step in creating programs that respond to the user rather than just showing fixed messages.