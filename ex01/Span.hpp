/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:13:18 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 09:47:55 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <set>
#include <climits>

class Span{
	public:
		Span(void);
		Span(const unsigned int &len);
		Span(const Span &other);
		~Span();
		
		Span &operator=(const Span &other);
		
		void addNumber(const int &n);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
	private:
		std::multiset<int> ms;
		const unsigned int size;
	
};
#endif