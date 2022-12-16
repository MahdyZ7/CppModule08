/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:07:47 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 20:04:34 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
		std::list<int> lst;
		for (int i = 0; i < size; i++)
			lst.push_back(std::rand());
		a.addMany(lst);
		std::cout<<	"New Test\n";
		std::cout << "The longest span is: " << a.longestSpan() << std::endl;
		std::cout << "The shortest span is: " << a.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}