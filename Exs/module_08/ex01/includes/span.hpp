#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>

class Span
{
	private:
		std::vector<int>	vec;

	public:
		Span(unsigned int N);
		~Span(void);

		void	addNumber(int number);
		void	addMultipleNumbers(void);
		void	printVector(void) const;

		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
