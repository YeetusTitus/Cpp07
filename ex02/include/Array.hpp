/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:06:41 by jforner           #+#    #+#             */
/*   Updated: 2022/08/23 10:52:26 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

template <typename T>
class Array {

private:
unsigned int	len;
T*				ar;

public:
	Array(void)
	{
		len = 0;
		ar = new T[0];
		std::cout << "Array created !" << std::endl;
	}

	Array(int n)
	{
		len = n;
		ar = new T[n];
		std::cout << "Array created !" << std::endl;
	}
	
	~Array(void)
	{
		std::cout << "Array destroyed!" << std::endl;
	}
        
	Array(const Array &copy)
	{

		len = copy.len;
		ar = new T[len];
		for(unsigned int i = 0; i < len; i++)
			ar[i] = copy.ar[i];
		std::cout << "Array created from a copy!" << std::endl;
	}

	Array& operator=(const Array &copy)
	{
		len = copy.len;
		ar = copy.ar;
		std::cout << "Array copied!" << std::endl;
		return *this;
	}

	T&	operator[](unsigned int i)
	{
		if (i >= len)
			throw OutRange();
		return ar[i];
	}

	unsigned int size(void)
	{
		return len;
	}

	class OutRange: public std::exception
	{
		public:
		const char *	what(void) const throw()
		{
			return "Array index out of range !";
		}
	};
};

#endif