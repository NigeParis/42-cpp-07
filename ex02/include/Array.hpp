/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:51:54 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/15 15:03:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


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