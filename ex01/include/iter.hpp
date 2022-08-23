/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:27:12 by jforner           #+#    #+#             */
/*   Updated: 2022/08/19 15:58:57 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

template <typename T>
void    iter(T *pnt, unsigned int len, void (*func)(T &))
{
    for (unsigned int i = 0; i < len; i++)
        func(pnt[i]);
}
#endif