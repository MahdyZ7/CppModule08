/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:13:18 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 20:04:41 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <set>
#include <climits>
#include<list>

class Span{
	public:
		Span(void);
		Span(const unsigned int &len);
		Span(const Span &other);
		~Span();
		
		Span &operator=(const Span &other);
		
		void addNumber(const int &n);
		template <typename T>
		void addMany(T &container)
		{
			for (typename T::iterator it = container.begin(); it != container.end(); ++it)
				addNumber(*it);
		}
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
	private:
		std::multiset<int> ms;
		const unsigned int size;
	
};
#endif