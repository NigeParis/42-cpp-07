#include "../include/Array.hpp"

int main() {

    Array<int> a((Array<int>(3)));

    std::cout << "Array size is: " << a.size() << std::endl;

    try {
        std::cout << a[2] << " : is the value of Array[2]" << std::endl;
    }
    catch(std::exception &e ) {
        std::cerr << e.what() << std::endl;   
    }
        return 0;
}
