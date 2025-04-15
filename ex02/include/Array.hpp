/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:51:54 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/15 14:52:12 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


template <typename T> class Array {

    public:

        Array(void): _myArray(new T[0]), _size(0) {
            std::cout << "Empty array created" << std::endl;    
            
        };

        Array(unsigned int n): _myArray(new T[n]), _size(n) {
            std::cout << "Array [" << n << "] created" << std::endl;    
            for (unsigned int i = 0; i < n; i++) {
                _myArray[i] = i + 1;
            }
        };
        
        ~Array(void) {
            std::cout << "Array deleted" << std::endl;    
            delete[] _myArray;
         };

        T &operator[](unsigned int i) {
            
            if (i >= this->_size)
                throw std::out_of_range("std::out_of_range \"Out of limits\"");
            return (_myArray[i]);
        };


         
        unsigned int size(void) {
          
            return (_size);
        };

        

    
    private:
    
        T *_myArray;
        unsigned int _size;
    
};