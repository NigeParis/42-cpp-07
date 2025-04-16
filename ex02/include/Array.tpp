/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:09:50 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/16 13:11:02 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
    
// template empty constructor
template <typename Template>
Array<Template>::Array(void): _myArray(new Template[0]), _size(0) {
    std::cout << "Empty array created" << std::endl;        
};

// template constructor of array of size n
template <typename Template>
Array<Template>::Array(unsigned int n): _myArray(new Template[n]), _size(n) {
    std::cout << "Array [" << n << "] created" << std::endl; 
    for (unsigned int i = 0; i < n; i++) {
        _myArray[i] = i + 1;
    }
};

// template copy constructor
template <typename Template>
    Array<Template>::Array(Array &array) {
        std::cout << "Copy constructor is called" << std::endl;
        this->_myArray = new Template[array._size];
        for (unsigned int i = 0; i < array._size; ++i) {
            _myArray[i] = array._myArray[i] + 2;
        }
        this->_size = array._size;
    };

// template assignement constructor  
template <typename Template>
Array<Template> &Array<Template>::operator=(Array &array) {
    std::cout << "Assignement is called" << std::endl;
    if (this != &array) {
        delete[] _myArray;
        _size = array._size;
        _myArray = new Template[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            _myArray[i] = array._myArray[i] + 1;
        }
    }
    return *this;
}

// template destructor
template <typename Template>
Array<Template>::~Array(void) {
    std::cout << "Array deleted" << std::endl; 
    delete[] _myArray;
};

// template subscript operator
template <typename Template>
Template &Array<Template>::operator[](unsigned int i) {            
    if (i >= this->_size)
        throw std::out_of_range("std::out_of_range \"Out of limits\"");
    return (_myArray[i]);
}; 

// template member function size - return size of array
template <typename Template>
unsigned int Array<Template>::size(void) {          
        return (_size);
};

