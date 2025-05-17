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
