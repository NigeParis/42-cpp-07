/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:51:54 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/16 11:23:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename Template> class Array {

    public:

        Array(void): _myArray(new Template[0]), _size(0) {
            std::cout << "Empty array created" << std::endl;    
            
        };

        Array(unsigned int n): _myArray(new Template[n]), _size(n) {
            std::cout << "Array [" << n << "] created" << std::endl; 
            for (unsigned int i = 0; i < n; i++) {
                _myArray[i] = i + 1;
            }
        };

        Array(Array &array) {
            std::cout << "Copy constructor is called" << std::endl;
            this->_myArray = new Template[array._size];
            // Assuming _myArray is a dynamic array, copy the elements from array._myArray
            for (unsigned int i = 0; i < array._size; ++i) {
                _myArray[i] = array._myArray[i] + 2;
            }
            this->_size = array._size;
        };
        
        Array &operator=(Array &array) {
            std::cout << "Assignement is called" << std::endl;
            if (this != &array) {
                delete[] _myArray;  // Free existing memory
                _size = array._size;
               _myArray = new Template[_size];
                for (unsigned int i = 0; i < _size; ++i) {
                    _myArray[i] = array._myArray[i] + 1;
                }
            }
            return *this;
        }
        
        ~Array(void) {
            std::cout << "Array deleted" << std::endl; 
            delete[] _myArray;
         };

        Template &operator[](unsigned int i) {
            
            if (i >= this->_size)
                throw std::out_of_range("std::out_of_range \"Out of limits\"");
            return (_myArray[i]);
        };
         
        unsigned int size(void) {
          
            return (_size);
        };

        

    
    private:
    
        Template *_myArray;
        unsigned int _size;
    
};

