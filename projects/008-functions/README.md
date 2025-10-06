# Learning Summary

## Introduction
This program introduces the use of functions in C++. A function is a reusable block of code that performs a specific task. By using functions, programs become easier to read, maintain and expand.

## What I Learnt

### Writing and calling functions
I created functions that each perform a separate task. For example, the `add` function takes two numbers as input and returns their sum. By calling the function in `main`, I was able to use the result in a calculation:

```cpp
int sum = add(7, 2);
std::cout << "7+2=" << sum << "\n";
```

### Printing a message

I wrote a function called `hello` that displays the message "Hello World!". This shows how a function can be used to produce output without returning a value:
```cpp
void hello() {
  std::cout << "Hello World!" << "\n";
}
```

### Checking if a number is even
I learnt how to write a function that checks if a number is even by using the modulus operator. The function returns `true` if the number is even and `false` if it is odd. This return value can then be used in a decision:
```cpp
if (isEven(number)) {
  std::cout << number << " is even" << "\n";
} else {
  std::cout << number << " is odd" << "\n";
}
```

## Conclusion
With this program I learnt that:

- Functions can return values that can be used in further calculations
- Functions can perform tasks without returning values, such as printing messages
- Boolean functions can return true or false and be used to guide program decisions

This was a practical step in learning how to structure programs into smaller reusable parts rather than writing everything in `main`.