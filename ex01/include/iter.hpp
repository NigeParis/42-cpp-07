/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:28:39 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/15 15:05:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// iterate through array and apply to each element the function template
template <typename Template> void iter(Template* array, std::size_t length,  void (*func)(Template&)) {
    for (std::size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// function template to be apply to each element
template <typename Template> void printElement(Template& element) {

    element += 33;
    std::cout << element << std::endl;
}
