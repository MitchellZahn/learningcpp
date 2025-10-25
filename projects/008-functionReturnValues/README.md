# Understanding C++ Function Return Values

## Introduction
This project builds upon my learning of C++ fundamentals by introducing the concept of value-returning functions.  
In earlier lessons, we asked the user for input and processed that input directly in `main()`. But as programs grow, it becomes useful to break tasks into smaller reusable pieces called functions.  
However, for these functions to be useful, they often need to return information back to whoever called them. That’s where function `return` values come in.  

---

## What I learnt

### 1. What Are Function Return Values
A function return value is a piece of data that a function sends back to whoever called it.  
To return a value, a function must:
1. Declare a return type (e.g., `int`, `double`, etc.)
2. Use a `return` statement to provide the value  

This allows data generated inside a function to be saved and reused in `main()` or other functions.

Here’s the full code:
```cpp
#include <iostream>

int getNumberFromUser() {
  std::cout << "Pick a number: ";
  int input{};
  std::cin >> input;

  return input; // This sends the user's number back to the caller
}

int main() {
  int x{ getNumberFromUser() }; // return value stored in x
  int y{ getNumberFromUser() }; // return value stored in y

  std::cout << "You picked " << x << " and " << y << '\n';

  return 0;
}
```
This program calls `getNumberFromUser()` twice, returning a different number each time. The returned values are then stored into variables `x` and `y`, so we can use them later in `main()`.

---

### 2. Why Return Values Are Important
Without return values, any data processed inside a function is lost when the function ends.  

Example of what doesn’t work:
```cpp
void getValue() {
    int input{};
    std::cin >> input;
} // input disappears here!
```
Value-returning functions allow us to:
- Keep the data we receive
- Reuse the function repeatedly (DRY principle: _Don't Repeat Yourself_)
- Organize code logically into smaller tasks

---

### 3. How Return Values Work
When a function hits a return statement:
1. The expression after return is evaluated.
2. A copy of that value is given back to the caller.
3. The function immediately stops running.

Example:
```cpp
int addTwo() {
    return 2 + 2; // returns 4
}
```
The caller can:
- Store it in a variable
- Print it
- Use it in an expression

---

### 4. Only One Value Can Be Returned
Each function call can only return one value.  
But that value can be:
- A literal (`return 10;`)
- A variable (`return x;`)
- An expression (`return x + y;`)
- Even another function call (`return getNumberFromUser();`)

We’ll learn techniques later to return more complex data.

---

### 5. Best Practices Learnt
| Concept | Why it matters |
|---|---|
| Always return a value from non-void functions | Avoids undefined behavior |
| Use return values instead of repeating code | Follows **DRY** principle |
| Store function results if used more than once | Efficiency + readability |

---

## Advantages of This Lesson
1. **Better Organization**: Code is cleaner and easier to understand.
2. **Reusability**: One function can handle user input anywhere in the program.
3. **Controlled Data Flow**: We can pass information between functions safely.

---

## Conclusion
In this lesson, I learnt how functions can return data back to the caller, allowing us to build modular and reusable code. Using return values makes programs more flexible, readable, and scalable.  
This knowledge is vital as we continue building more complex programs where functions must share information and work together efficiently.