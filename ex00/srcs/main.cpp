/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:28:44 by jforner           #+#    #+#             */
/*   Updated: 2022/08/23 11:14:07 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

class Awesome
{
	private:
	int _n;
	public:
	Awesome(void) : _n(0){}
	Awesome(int n) : _n(n){}
    Awesome & operator=(Awesome & a) { _n = a._n; return *this;}
    bool operator==(Awesome const & rhs)const {return (this->_n ==rhs._n);}
    bool operator!=(Awesome const & rhs)const {return (this->_n !=rhs._n);}
    bool operator>(Awesome const & rhs)const {return (this->_n >rhs._n);}
    bool operator<(Awesome const & rhs)const {return (this->_n <rhs._n);}
    bool operator>=(Awesome const & rhs)const {return (this->_n >=rhs._n);}
    bool operator<=(Awesome const & rhs)const {return (this->_n <=rhs._n);}
	int get_n(void) const {return this->_n;}
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) {o << a.get_n(); return o;}

int main(void)
{
    int         a = 1, b = 2;
    std::string i("Bruh"), j("Letz gong");
    Awesome x(5), y(4);



    swap(a,b);
    swap(i,j);
    swap(x,y);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << i << std::endl;
    std::cout << j << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl << std::endl;

    std::cout << ::min(a, b) << std::endl;
    std::cout << ::min(i, j) << std::endl;
    std::cout << ::min(x, y) << std::endl << std::endl;

    std::cout << ::max(a, b) << std::endl;
    std::cout << ::max(i, j) << std::endl;
    std::cout << ::max(x, y) << std::endl;
    return 0;
}