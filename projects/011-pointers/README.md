# Learning Summary

## Introduction
This program introduces me to working with pointers in C++. It shows me how to declare a pointer, assign it the address of a variable and use it to access or change the value stored in that variable.

## What I Learnt

### Pointers in C++
I learnt that a pointer is a variable that stores the memory address of another variable. In this program I declared a pointer to hold the address of an integer:

```cpp
int num = 10;  
int *ptr = &num;
```
The pointer `ptr` stores the address of `num`. Using `*ptr`, I was able to access the value stored at that address. For example:
```cpp
std::cout << "Pointer (ptr) holds address: " << ptr << std::endl;  
std::cout << "Value at the pointer (dereferencing): " << *ptr << std::endl;
```

### Changing Values with Pointers
I learnt that pointers not only allow me to view the value at a memory location but also to change it directly. By assigning a new value to `*ptr`, the variable `num` was updated automatically:
```cpp
*ptr = 20;
```
After this change, both `num` and `*ptr` displayed the new value. This showed me how powerful pointers are in controlling and updating data.

## Conclusion
With this program I learnt the following key ideas about pointers in C++:

- A pointer stores the memory address of another variable
- The `*` operator allows me to access or change the value at the address held by the pointer
- Updating a value through a pointer changes the original variable

These concepts give me a foundation for working with pointers in C++ and help me understand how variables and memory are connected in programming.