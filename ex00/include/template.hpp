/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:42:15 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/15 15:06:48 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename Template> void swap(Template &a, Template &b) {

    Template temp;
    temp = a;
    a = b;
    b = temp;
};

template <typename Template> Template min(Template &a, Template &b) {

    if (a == b)
        return (b);
    if (a < b)
        return (a);
    return (b);
};

template <typename Template> Template max(Template &a, Template &b) {

    if (a == b)
        return (b);
    if (a > b)
        return (a);
    return (b);
};

