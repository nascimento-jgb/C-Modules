#ifndef EASYFIND_H
# define EASYFIND_H

#include <stdexcept>
#include <vector>

template <typename T>
class EasyFind
{
	public:
		typename T::iterator find(T &container, int value);
};

#include "../srcs/easyfind.tpp"

#endif
