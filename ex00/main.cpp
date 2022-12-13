/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:50:07 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/10 22:49:01 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <algorithm>
#include <exception>
#include <iterator>

template<typename T>
int easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return *it;
	else
		throw std::exception();
}

int main(void)
{
	std::list<int> ar;
	ar.push_back(1);
	ar.push_back(2);
	ar.push_back(3);
	ar.push_back(4);
	ar.push_back(5);
	try
	{
		std::cout << easyfind(ar, 3) << std::endl;
		std::cout << easyfind(ar, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
}