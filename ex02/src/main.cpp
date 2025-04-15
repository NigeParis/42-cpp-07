#include "../include/Array.hpp"

int main() {

    Array<int> a((Array<int>(8)));

    std::cout << "Array size is: " << a.size() << std::endl;
    return 0;
}
