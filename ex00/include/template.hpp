/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:42:15 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/14 14:19:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T> void swap(T &a, T &b) {

    T temp;
    temp = a;
    a = b;
    b = temp;
};

template <typename T> T min(T &a, T &b) {

    if (a == b)
        return (b);
    if (a < b)
        return (a);
    return (b);
};

template <typename T> T max(T &a, T &b) {

    if (a == b)
        return (b);
    if (a > b)
        return (a);
    return (b);
};

