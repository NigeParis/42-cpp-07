#include "./include/iter.hpp"
#include <iostream>
#include <string>

// Function template definition for iter
template <typename T, typename F>
void iter(T* array, std::size_t length, F func(T&)) {
    for (std::size_t i = 0; i < length; ++i) {
        func(array[i]); // Apply the function to each element of the array
    }
}

// Template function for printing elements

template <typename T> void printElement(const T& element) {
    std::cout << element << " ";
}

int main() {
    // Example with an array of int
    int intArray[] = {1, 2, 3, 4, 5};
    std::size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    iter(intArray, intLength, printElement); // Output: 1 2 3 4 5

    std::cout << std::endl; // Newline for clean output

    // Example with an array of std::string
    std::string strArray[] = {"Hello", "World", "from", "C++"};
    std::size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
    iter(strArray, strLength, printElement); // Output: Hello World from C++

    std::cout << std::endl; // Newline for clean output

    return 0;
}
