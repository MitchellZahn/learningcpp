# Learning Summary

## Introduction
This program introduces me to arrays in C++. It shows me how to declare an array, initialise it with values, access individual elements and change them. It also builds on my earlier understanding of loops by using them to process the contents of an array.

## What I Learnt

### Arrays in C++
I learnt that an array is a collection of values stored under a single name. Each value in an array is called an element and is accessed by its position or index. In this program I created an array of nine integers:

```cpp
int numbers[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
```
Here, `int` means the array stores whole numbers. The number inside the square brackets shows the size of the array and the values inside the braces are the initial elements.

### Accessing and Printing Array Elements
I learnt how to access elements of an array using their index. In C++, array indexing starts at zero. A loop can be used to print each element:
```cpp
for (int i = 0; i < 9; i++) {
  std::cout << numbers[i] << " ";
}
```
This prints all the elements of the array in order.

### Modifying Array Elements
I learnt that array elements can be changed using their index. In this program, each element was multiplied by two:
```cpp
for (int i = 0; i < 9; i++) {
  numbers[i] *= 2;
}
```
After this loop, all values in the array are updated.

### Taking Input into an Array

I also learnt how to store user input into an array. The program asked the user to enter three numbers and saved them into another array:
```cpp
for (int i = 0; i < 3; i++) {
  std::cin >> userNumbers[i];
}
```
This showed me that arrays can be filled not only with fixed values but also with data provided by the user.

## Conclusion
With this program I learnt the following key ideas about arrays in C++

- Arrays allow me to store multiple values of the same type under one name
- Elements are accessed by their index starting from zero
- Loops are useful for printing or modifying arrays
- Arrays can be filled with fixed values or user input

This gives me a foundation for working with collections of data in C++ and will help me write programs that handle more than just single values.