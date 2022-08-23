/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:28:44 by jforner           #+#    #+#             */
/*   Updated: 2022/08/23 11:12:50 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

class Awesome
{
	private:
	int _n;
	public:
	Awesome(void) : _n(42){return;}
	int get(void) const {return this->_n;}
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs)
{
	o << rhs.get();
	return o;
}

template <typename T>
void print(T x) {std::cout << x << std::endl; return;};


void displayStr(std::string &k)
{
    std::cout << k << std::endl;
}

void displayInt(int &i)
{
    std::cout << i << std::endl;
}

int main(void)
{
	Awesome tab[5];

    std::string	str[] = {"square" , "dot" , "triangle", "diamond"};
    int			in[] = {42, 15, 21, 1337};
    std::cout << "String display :" << std::endl;
    iter( str, 4, displayStr);
    std::cout << "Int display :" << std::endl;
    iter( in, 4, displayInt);
    std::cout << "Awesome display :" << std::endl;
    iter( tab, 5, print);
    return 0;
}