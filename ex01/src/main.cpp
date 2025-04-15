#include "./include/iter.hpp"

int main() {

    int intArray[] = {1, 2, 3, 4};
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};
    std::string strArray[] = {"Hello", "Second element", "3rd element", "Str array last element"};

    std::cout << "--------------- int Array + 33 in printElement ----------------" << std::endl;

    std::size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    iter(intArray, intLength, printElement);

    std::cout << "--------------- string Array + 33 in printElement -------------" << std::endl;

    std::size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
    iter(strArray, strLength, printElement);

    std::cout << "--------------- char Array + 33 in printElement----------------" << std::endl;
    std::size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
    iter(charArray, charLength, printElement);

    return 0;
}
