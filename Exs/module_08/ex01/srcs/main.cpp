#include "../includes/span.hpp"
#include <iostream>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(7);
		sp.addNumber(4);
		sp.addNumber(125);
		sp.addNumber(10);
		sp.addNumber(11);
		sp.printVector();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		// Span sp = Span(10000);
		// sp.addMultipleNumbers();
		// sp.printVector();
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
