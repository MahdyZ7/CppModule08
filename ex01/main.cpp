/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:07:47 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/15 20:18:41 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main(void)
{
	try
	{
		Span a(10);
		a.addNumber(1);
		a.addNumber(23);
		std::cout << "The longest span is: " << a.longestSpan() << std::endl;
		std::cout << "The shortest span is: " << a.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}