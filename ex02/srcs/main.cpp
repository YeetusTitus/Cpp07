/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:28:44 by jforner           #+#    #+#             */
/*   Updated: 2022/08/23 10:57:34 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

int main(void)
{
    {
        Array<char> ar;

        std::cout << "ar size = "<< ar.size() << std::endl;

        Array<char> ar2(5);
        Array<int>  ar3(5);

        ar2[0] = 'a'; ar2[1] = 'r';
        Array<char> ar4(ar2);
        ar2[2] = 'r'; ar2[3] = 'a';
        ar4[2] = 't'; ar4[3] = 'i'; ar4[4] = 'c';
        ar2[4] = 'y';

        std::cout << "ar2 size = "<< ar2.size() << std::endl;
        std::cout << "ar4 size = "<< ar4.size() << std::endl;
        std::cout << "ar3 size = "<< ar3.size() << std::endl << std::endl;

        try 
        {
            for(unsigned int i = 0; i < 6; i++)
            {
                std::cout << "ar2 " << i <<" = "<< ar2[i];
                std::cout << " ar4 " << i <<" = "<< ar4[i];
                ar3[i] = i+1;
                std::cout << " ar3 " << i <<" = "<< ar3[i] << std::endl;
            }
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    // system("leaks template");
    return 0;
}