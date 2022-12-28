/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 02:32:16 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/28 02:53:08 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T tmp(a);

	a = b;
	b = tmp;
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
		return a;
	else if (a > b)
		return b;
	else
		return b;
}

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return b;
}

#endif
