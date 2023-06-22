#include "../includes/span.hpp"
#include <cstdlib>
#include <ctime>

Span::Span(unsigned int N) : vec(N) { return ;}

Span::~Span(void)
{
	vec.clear();
	return ;
}

void	Span::addNumber(int number)
{
	for (unsigned long i = 0; i < vec.size(); i++)
	{
		if (vec[i] == 0)
		{
			vec[i] = number;
			break;
		}
	}
	return ;
}

void	Span::addMultipleNumbers(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	for (unsigned long i = 0; i < vec.size(); i++)
	{
		unsigned int random_number = static_cast<unsigned int>(std::rand());
		vec[i] = random_number;
	}
	return ;
}

void	Span::printVector(void) const
{
	for (unsigned long i = 0; i < vec.size(); i++)
		std::cout << "Value at index [" << i << "] : " << vec.at(i) << std::endl;
	return ;
}

int	Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();
	else
	{
		std::vector<int>::iterator	it_first = vec.begin();
		std::vector<int>::iterator	it_second = vec.begin() + 1;
		int difference = abs(*it_first - *it_second);

		for (std::vector<int>::iterator	it = vec.begin() + 2; it != vec.end(); it++)
		{
			if (abs(*it - *it_second) < difference)
				difference = abs(*it - *it_second);
			++it_second;
		}
		return (difference);
	}
}

int	Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();
	else
	{
		std::vector<int>::iterator	it_max = vec.end() - 1;
		std::vector<int>::iterator	it_min = vec.end();
		for (std::vector<int>::iterator	it = vec.begin(); it != vec.end(); it++)
		{
			if (*it > *it_max)
				it_max = it;
			if (*it < *it_min)
				it_min = it;
		}
		return (*it_max - *it_min);
	}
}
