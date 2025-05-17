# 42-cpp-07
# **42 - Exercise 00: Start with a Few Functions**

## **Overview**
This exercise introduces **function overloading, memory management, and basic object-oriented programming** in C++. The goal is to start working with **different function implementations** and practice handling **dynamic memory allocation** efficiently.

---

## **Objectives**
- Understand and implement **function overloading**.
- Work with **dynamic memory allocation** (`new` / `delete`).
- Develop **basic reusable functions** with proper **input validation**.

---

## **Core Concepts**
### **1. Function Overloading**
Allows multiple functions with the **same name** but **different parameters**, improving code readability and modularity.

```cpp
#include <iostream>

// Overloaded functions
void print(int x) { std::cout << "Integer: " << x << std::endl; }
void print(double x) { std::cout << "Double: " << x << std::endl; }
void print(const std::string& x) { std::cout << "String: " << x << std::endl; }

int main() {
    print(10);
    print(3.14);
    print("Hello, 42!");
}
```
Templates in C++

Templates allow creating generic functions that work with multiple types without redundancy.

Example:

```cpp
#include <iostream>

template <typename T>
void print(T x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    print(42);       // Works for int
    print(3.14);     // Works for double
    print("Hello");  // Works for string
}

```

Why Use Templates?

    Eliminates repetitive function definitions.

    Supports any data type, making code more scalable.

Key Takeaways

    Function overloading simplifies multi-type support with identical function names.

    Templates make functions more flexible and reusable across data types.

    Both techniques help write cleaner, more efficient C++ code.



