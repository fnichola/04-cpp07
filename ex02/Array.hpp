/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:17:45 by fnichola          #+#    #+#             */
/*   Updated: 2023/01/04 03:46:40 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
public:
	Array()
	: m_size(0), m_array(new T*[0]) {}

	Array(unsigned int n)
	: m_size(n), m_array(new T*[n])
	{
		for (size_t i = 0; i < m_size; ++i)
		{
			m_array[i] = new T;
		}
	}

	Array(const Array& src)
	{
		*this = src;
	}

	Array& operator=(const Array& rhs)
	{
		m_size = rhs.m_size;
		m_array = new T*[m_size];

		for (size_t i = 0; i < m_size; ++i)
		{
			m_array[i] = new T(*rhs.m_array[i]);
		}
		return *this;
	}

	~Array()
	{
		for (size_t i = 0; i < m_size; i++)
		{
			delete m_array[i];
		}
		delete[] m_array;
	}

	T& operator[](size_t i)
	{
		if (i >= m_size)
			throw std::out_of_range("Tried to access element out of bounds.");
		else
			return *m_array[i];
	}

	unsigned int size() const
	{
		return m_size;
	}

private:
	unsigned int m_size;
	T** m_array;
};

#endif
