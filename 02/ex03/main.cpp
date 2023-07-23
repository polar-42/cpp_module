/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:43:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/03/11 14:32:23 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <Point.hpp>

int main(void)
{
	Point	a(0.0f, 0.0f);
	Point	b(15.0f, 30.0f);
	Point	c(20.0f, 0.0f);
	Point	d(8.0f, 15.0f);
	Point	e(10.0f, 10.0f);
	Point	f(0.0f, 1.0f);
	Point	g(7.0f, 16.0f);
	Point	h(8.0f, 5.0f);

	std::cout << std::boolalpha;
	std::cout << "Is d in the a, b, c triangle == " << bsp(a, b, c, d) << std::endl;
	std::cout << "Is e in the a, b, c triangle == " << bsp(a, b, c, e) << std::endl;
	std::cout << "Is f in the a, b, c triangle == " << bsp(a, b, c, f) << std::endl;
	std::cout << "Is g in the a, b, c triangle == " << bsp(a, b, c, g) << std::endl;
	std::cout << "Is h in the a, b, c triangle == " << bsp(a, b, c, h) << std::endl;

	return (0);
}

/*

                        b(10, 30)
                        -
                       / \
                      /   \
                     /     \
                    /       \
                   /         \
                  /           \
                 /             \
                /               \
               /d(8, 15)         \
              /                   \ g(7, 16)
             /                     \
            /                       \
           /            e(10, 10)    \
          /                           \
         /                             \
        /      h(8, 5)                  \
       /                                 \
  f(1,/0)                                 \
     /                                     \
   +-----------------------------------------
  a(0, 0)                                          c(20, 0)

*/
