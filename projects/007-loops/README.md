# Learning Summary

## Introduction
This program introduces me to loops in C++. Loops allow a program to repeat actions automatically until a certain condition is met. They make it easier to write code that performs the same task multiple times without having to repeat instructions manually.

## What I Learnt

### For loop
I learnt how to use a for loop to repeat instructions when I know exactly how many times I want them to run. A for loop has an initial value, a condition, and an increment or decrement. For example

```cpp
for (int i = 0; i < 5; i++) {
  std::cout << "i: " << i << "\n";
```
This prints the values of `i` from zero to four. 
I also learnt how to use continue to skip a particular value and how to use break to stop the loop early.

### While loop

I explored the while loop which runs instructions while a condition is true. For example
```cpp
int j = 0;
while (j < 5) {
  std::cout << "j: " << j << "\n";
  j++;
}
```
This prints the values of `j` from zero to four. If I use continue the loop will skip the current step and move to the next one. If I use break the loop will finish immediately.

### Do while loop
I also practised the do while loop. This type of loop runs at least once before checking the condition at the end. For example
```cpp
int k = 0;
do {
  std::cout << "k: " << k << "\n";
  k++;
} while (k < 5);
```
This prints the values of `k` from zero to four. Like the other loops it can also use continue to skip a step and break to end early.

## Conclusion
With this program I learnt that:

- A for loop is useful when the number of repetitions is known
- A while loop is useful when a condition needs to stay true
- A do while loop is useful when I want the loop to run at least once
- Break can be used to end a loop early
- Continue can be used to skip the rest of the current step

Loops make programs more efficient by allowing repeated actions to be written once and controlled by conditions.