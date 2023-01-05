/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:45:12 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/05 02:32:02 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int main()
{
	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "int array:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	Array<int>a(10);

	std::cout << "size = " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); ++i)
	{
		a[i] = 42 + i;
	}
	for (size_t i = 0; i < a.size(); ++i)
	{
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "std::string array:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	Array<std::string>s(2);

	s[0] = "Hello";
	s[1] = " world";

	std::cout << "size = " << s.size() << std::endl;
	std::cout << "s: " << s[0] << s[1] << std::endl;

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "copy constructor:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	Array<std::string>s2(s);
	std::cout << "size = " << s2.size() << std::endl;
	std::cout << "s2: " << s2[0] << s2[1] << std::endl;

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "check that copy is unique:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	s2[1] = " Bob";
	std::cout << "s: " << s[0] << s[1] << std::endl;
	std::cout << "s2: " << s2[0] << s2[1] << std::endl;

	std::cout << "\n------------------------------------------" << std::endl;
	std::cout << "Out of bounds test:" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	try
	{
		s2[2] = "error";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
