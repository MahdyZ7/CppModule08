/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:06:54 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/16 20:46:26 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void printStack(MutantStack<int> &mstack)
{
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "The stack has " << mstack.size() << " elements:";
	while (it != ite)
	{
		std::cout << " " << *it;
		++it;
	}
	std::cout << std::endl;
}

int main(void)
{
	MutantStack<int> mstack;
	if (mstack.empty())
		std::cout << "The mutant stack is empty" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	for(int i = 0; i < 10; i++)
		mstack.push(i);
	MutantStack<int> cstack(mstack);
	MutantStack<int> astack = cstack;
	printStack(mstack);
	
}