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
# **42 - Exercise 01: iter**

## **Overview**
This exercise focuses on **templates** and **function iterators** in C++. The goal is to create a **generic function** that applies a given function to each element in an array.

---

## **Objectives**
- Implement a **template function** to iterate over an array.
- Apply a function to each element without modifying the original array structure.
- Reinforce **template programming** principles.

---

## **Function Template for Iteration**
The idea is to use **templates** so that `iter()` works with **any type of array**.

### **Example Implementation**
```cpp
#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

void printElement(int x) {
    std::cout << x << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, printElement);
    return 0;
}
```

Explanation

    iter() takes:

        A pointer to an array.

        The array length.

        A function to apply to each element.

    The template ensures the function works for any data type.

    The printElement() function is passed as an argument, applying it to each element.

Key Takeaways

    Templates make functions flexible and reusable.

    The iterator function ensures each element is processed dynamically.

    This reinforces generic programming concepts in C++.


# **42 - Exercise 02: Array **  

## **Overview**  
This exercise focuses on **templates** and **dynamic arrays**, allowing the creation of a generic array class in C++. The goal is to implement a **template-based array structure** that supports various data types.  

---

## **Objectives**  
- Implement a **template class** for dynamic arrays.  
- Ensure **safe memory management** with proper allocation and deallocation.  
- Provide **operator overloading** for element access.  
- Handle **out-of-bounds exceptions** gracefully.  

---

## **Implementation Approach**  

### **1. Template-Based Array Class**  
The class should support **any data type**, providing dynamic memory allocation.  

```cpp
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* data;
    size_t size;
public:
    Array(size_t s) : size(s) { data = new T[s]; }
    
    ~Array() { delete[] data; }

    T& operator[](size_t index) {
        if (index >= size) throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    size_t length() const { return size; }
};

int main() {
    Array<int> numbers(5);
    try {
        numbers[0] = 42;
        std::cout << "First element: " << numbers[0] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

```

Explanation

    Templates allow flexibility, making the array work with any data type.

    Dynamic memory allocation (new/delete) prevents memory leaks.

    Operator overloading ([]) ensures intuitive element access.

    Exception handling (std::out_of_range) prevents accessing invalid indices.

Key Takeaways

```
    Templates make arrays adaptable to any type.

    Memory management ensures safe allocation and deallocation.

    Error handling prevents runtime crashes due to invalid access.
