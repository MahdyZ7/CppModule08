/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:28:47 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 11:29:23 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():size(0)
{
	std::cout << "Default constructor" << std::endl;
}

Span::Span(const unsigned int &len):size(len)
{
	std::cout << "Parametric contsructor" << std::endl;
}

Span::Span(const Span &other):size(other.size)
{
	ms = other.ms;
	std::cout << "Copy Constructor" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Destructor" << std::endl;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		const_cast<unsigned int&> (size) = other.size;
		ms = other.ms;
	}
	return (*this);
}

void Span::addNumber(const int &n)
{
	if (ms.size() < size )
		ms.insert(n);
	else
		throw std::runtime_error("Error: Max size reached");
}

unsigned int Span::shortestSpan(void) const
{
	unsigned int spn = UINT_MAX, temp_spn;
	int temp_elm;
	std::multiset<int>::iterator it = ms.begin();
	if (ms.size() < 2)
		throw std::logic_error("Error: not enough elements found");
	temp_elm = *it;
	++it;
	for (; it != ms.end(); ++it)
	{
		temp_spn = *it - temp_elm;
		if (temp_spn < spn)
		{
			if (temp_spn == 0)
				return 0;
			spn = temp_spn;
		}
		temp_elm = *it;
	}
	return spn;
}

unsigned int Span::longestSpan(void) const
{
	if (ms.size() < 2)
		throw std::logic_error("Error: not enough elements found");
	return (*(ms.rbegin()) - *(ms.begin()));
}