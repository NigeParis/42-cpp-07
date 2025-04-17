#include <iostream>
#include "../include/Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    {
        std::cout << " --------------- main supplied with project ---------------" << std::endl;
        Array<unsigned int> numbers(MAX_VAL);
        unsigned int* mirror = new unsigned int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<unsigned int> tmp = numbers;
            Array<unsigned int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0; 
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
    }

    {
        std::cout << " ---------------------- my test main ----------------------" << std::endl;

        Array<int> a(3);
        Array<int> c(a);
        Array<int> b;
        Array<int> d;
        
        d = a;
        std::cout << "Array size is: " << a.size() << std::endl;
        
        try {
            std::cout << RED << "created a(3)" << RESET << std::endl;
            std::cout << a[2] << " : is the value of Array a[2]" << std::endl;
            std::cout << BLUE  << "created c(a)" << RESET << std::endl;
            std::cout << c[2] << " : is the value of Array c[2]" << std::endl;
            std::cout << GREEN << "created a(3) - show value a[0]" << RESET << std::endl;
            std::cout << a[0] << " : is the value of Array a[0]" << std::endl;
            std::cout << YELLOW << "created d and then assigned d = a - show value a[0]" << RESET << std::endl;
            std::cout << d[0] << " : is the value of Array d[0]" << std::endl;
            std::cout << PINK << "created b  - show value b[0]" << RESET << std::endl;
            std::cout << b[0] << " : is the value of Array b[0]" << std::endl;
        }
        catch(std::out_of_range &e ) {
            std::cerr << e.what() << std::endl;   
        }
        std::cout << "delete all Arrays" << std::endl;
    }
    return 0;
}