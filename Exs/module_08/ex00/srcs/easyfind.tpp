#include "../includes/easyfind.hpp"
#include <algorithm>

template <typename T>
typename T::iterator EasyFind<T>::find(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container.");
	return it;
}
