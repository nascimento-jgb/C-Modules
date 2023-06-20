#include "../includes/easyfind.hpp"
#include <iostream>

int main()
{
	try
	{
		EasyFind< std::vector<int> > finder;
		std::vector<int> vec;

		for (int i = 1; i <= 5; i++)
			vec.push_back(i);
		std::vector<int>::iterator it = finder.find(vec, 3);
		std::cout << "Value found at the index: " << std::distance(vec.begin(), it) << std::endl;

		it = finder.find(vec, 6);
	} catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
};
