#include "../includes/span.hpp"
#include <cstdlib>
#include <ctime>

Span::Span(unsigned int N) : _elements(N), vec(N) { return ;}

Span::~Span(void)
{
	vec.clear();
	return ;
}

void	Span::addNumber(int number)
{
	vec.push_back(number);
	return ;
}

void	Span::addMultipleNumbers(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	unsigned int random_number = static_cast<unsigned int>(std::rand());

	for (int i = 0; i < static_cast<int>(_elements); i++)
		vec.push_back(random_number);
	return ;
}

void	Span::printVector(void) const
{
	for (int i = 0; i < static_cast<int>(_elements); i++)
		std::cout << "Value at index [" << i << "] : " << vec.at(i) << std::endl;
	return ;
}

int	Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();
	else
	{
		std::vector<int>::iterator	it_smallest = vec.begin();
		std::vector<int>::iterator	it_secondSmallest = vec.begin() + 1;

		if (*it_secondSmallest < *it_smallest)
			std::swap(it_smallest, it_secondSmallest);

		for (std::vector<int>::iterator	it = vec.begin() + 2; it != vec.end(); it++)
		{
			if (*it < *it_smallest)
			{
				it_secondSmallest = it_smallest;
				it_smallest = it;
			}
			else if (*it < *it_secondSmallest)
				it_secondSmallest = it;
		}
		return (it_secondSmallest - it_smallest);
	}
}

int	Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();
	else
	{
		std::vector<int>::iterator	it_max = vec.end();
		std::vector<int>::iterator	it_min = vec.end();
		for (std::vector<int>::iterator	it = vec.begin(); it != vec.end(); it++)
		{
			if (*it > *it_max)
				it_max = it;
			if (*it < *it_min)
				it_min = it;
		}
		return (it_max - it_min);
	}
}
