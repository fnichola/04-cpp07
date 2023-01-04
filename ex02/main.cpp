/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:45:12 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/04 05:34:03 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int main()
{
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

	Array<std::string>s(2);

	s[0] = "Hello";
	s[1] = " world";

	std::cout << "size = " << s.size() << std::endl;
	std::cout << s[0] << s[1] << std::endl;

	Array<std::string>s2(s);

	std::cout << "size = " << s2.size() << std::endl;
	std::cout << s2[0] << s2[1] << std::endl;

	s2[1] = " Bob";
	std::cout << s[0] << s[1] << std::endl;
	std::cout << s2[0] << s2[1] << std::endl;

	s2[2] = "error";
}
