#include "../include/Array.hpp"

int main() {

    Array<int> a(3);
    Array<int> c(a);
    Array<int> b;
    Array<int> d;

    d = a;
    std::cout << "Array size is: " << a.size() << std::endl;

    try {
        std::cout << a[2] << " : is the value of Array a[2]" << std::endl;
        std::cout << c[2] << " : is the value of Array c[2]" << std::endl;
        std::cout << a[0] << " : is the value of Array a[0]" << std::endl;
        std::cout << d[0] << " : is the value of Array d[0]" << std::endl;
        std::cout << b[0] << " : is the value of Array b[0]" << std::endl;
    }
    catch(std::out_of_range &e ) {
        std::cerr << e.what() << std::endl;   
    }
    return 0;
}
