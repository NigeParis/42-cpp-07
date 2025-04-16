/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:51:54 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/16 13:12:11 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename Template> class Array {
    
    public:
    
    Array(void);
    Array(unsigned int n);
    Array(Array &array);
    Array &operator=(Array &array);
    ~Array(void);
    
    Template &operator[](unsigned int i);
    unsigned int size(void);
    
    private:
    
    Template *_myArray;
    unsigned int _size;
};

#include "Array.tpp"