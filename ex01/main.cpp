/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:07:47 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 09:54:49 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
int main(void)
{
	try
	{
		int size = 1000000;
		Span a(size + 2);
		a.addNumber(INT_MAX);
		a.addNumber(INT_MIN);
		std::cout << "The longest span is: " << a.longestSpan() << std::endl;
		std::cout << "The shortest span is: " << a.shortestSpan() << std::endl;
		for (int i = 0; i < size; i++)
			a.addNumber(std::rand());
		std::cout << "The longest span is: " << a.longestSpan() << std::endl;
		std::cout << "The shortest span is: " << a.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}