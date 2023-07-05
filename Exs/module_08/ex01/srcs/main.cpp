#include "../includes/span.hpp"
#include <iostream>

int main()
{
	// {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printVector();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	// }
	// {
	// 	Span sp = Span(10000);
	// 	sp.addMultipleNumbers();
	// 	sp.printVector();
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	return 0;
}
