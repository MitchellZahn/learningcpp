# Learning Summary

## Introduction
This program introduces me to working with strings in C++. It shows me how to declare a string variable, take input from the user, and use it in output messages. I also learnt about `std::endl`, which is used to move to a new line in the output.

## What I Learnt

### Strings in C++
I learnt that a string is a sequence of characters that can be stored and manipulated as a single object. In this program, I declared a string variable to store the user's name:

```cpp
std::string name;
```
I then used `std::cin` to get input from the user and stored it in the string variable:
```cpp
std::cin >> name;
```
This allowed me to use the name in personalised output messages.

### The `std::endl`
I also learnt about `std::endl`, which is used to move the output to a new line. It works in the same way as writing `"\n"`, but it is clearer to read and makes the code easier to understand. For example:
```cpp
std::cout << "The Matrix has you..." << std::endl;
```
This ensures that each message appears on a new line.

## Conclusion
With this program I learnt the following key ideas about strings in C++:

- Strings allow me to store and use sequences of characters such as names or messages
- Input from the user can be stored directly into a string variable
- `std::endl` is a convenient way to move to a new line when printing

This gives me a foundation for working with text in C++ and helps me write programs that can interact with users in a more natural way.