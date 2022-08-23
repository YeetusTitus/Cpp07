/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:27:12 by jforner           #+#    #+#             */
/*   Updated: 2022/08/19 16:50:21 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

template <typename T>
void swap(T &v1, T &v2)
{
    T temp;

    temp = v1;
    v1 = v2;
    v2 = temp;
}

template <typename T>
T min(T v1, T v2)
{
    if (v1 < v2)
        return v1;
    return v2;
}

template <typename T>
T max(T v1, T v2)
{
    if (v1 > v2)
        return v1;
    return v2;
}
#endif