/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 02:52:37 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/28 05:27:59 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "iter.hpp"

void toUpper(char &c)
{
	c = std::toupper(c);
}

void inverse(int &num)
{
	num *= -1;
}

int main()
{
	int intArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char str[] = "Hello";

	iter(str, strlen(str), &toUpper);
	std::cout << str << std::endl;

	
	iter(intArray, 10, &inverse);
	for (int i = 0; i < 9; ++i)
	{
		std::cout << intArray[i] << ", ";
	}
	std::cout << intArray[9] << std::endl;

	return 0;
}
