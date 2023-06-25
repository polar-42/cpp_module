/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:47:19 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/23 09:11:31 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.tpp>

#define MAX_VAL 750

int main(int, char**)
{
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);

	    	std::cout << "tmp.size() = " << tmp.size() << std::endl;
	    	std::cout << "test.size() = " << test.size() << std::endl;

        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return (1);
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << "numbers[-2] = " << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << "numbers[MAX_VAL] = " << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }

	    Array<int> tmp = numbers;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (tmp[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return (1);
            }
        }

        delete [] mirror;
    }
    std::cout << std::endl;
    {
        Array<int> numbers(5);

        numbers[0] = 0;
        numbers[1] = 1;
        numbers[2] = 2;
        numbers[3] = 3;
        numbers[4] = 4;

        Array<int> numbers_tmp = numbers;

        numbers[0] = 55;
        std::cout << numbers_tmp[0] << " != " << numbers[0] << std::endl;
    }
    return (0);
}
