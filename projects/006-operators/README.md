# Learning Summary

## Introduction
This program introduces me to operators in C++. Operators are special symbols that allow programs to perform calculations, make comparisons, and work with values in different ways.

## What I Learnt

### Arithmetic operators
I learnt how to use arithmetic operators such as addition, subtraction, multiplication, division and modulus. For example, writing  

```cpp
std::cout << x << "+" << y << "=" << (x+y) << "\n";
```
displays the result of adding two numbers. Similar code is used for subtraction, multiplication, division and finding the remainder.

### Relational operators

I explored relational operators such as equal to, not equal to, greater than, less than, greater than or equal to, and less than or equal to. These operators are used to compare two values and return true or false. For example
```cpp
std::cout << x << "==" << y << "? " << (x==y) << "\n";
```
shows whether the two values are the same.

### Logical operators
I used logical operators such as not, and, and or. These work with Boolean values like true and false. For example
```cpp
std::cout << a << "&&" << b << "=" << (a && b) << "\n";
```
shows the result of combining two Boolean values with a logical and.

### Bitwise operators
I also learnt about bitwise operators which work on the binary representation of numbers. These include and, or, xor, not, left shift and right shift. For example
```cpp
std::cout << a << " << 1 = " << (a << 1) << "\n";
```
shifts the bits of a number to the left.

### Assignment operators
Finally I explored assignment operators that combine calculation and assignment in one step. For example
```cpp
c += 2;
```
adds two to the variable c and updates its value.

## Conclusion
With this program I learnt that:

- Arithmetic operators allow me to calculate values
- Relational operators allow me to compare values
- Logical operators allow me to combine true and false conditions
- Bitwise operators allow me to work directly with binary values
- Assignment operators allow me to update variables efficiently

This is the first step in understanding how operators give programs the ability to calculate, compare, and manipulate values in many different ways.