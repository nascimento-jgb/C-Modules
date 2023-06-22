#include "../includes/MutantStack.hpp"

template<typename T>
void	MutantStack<T>::push(const T &value)
{ return stack.push(value); }

template<typename T>
void	MutantStack<T>::pop(void)
{ return stack.pop(); }

template<typename T>
T	&MutantStack<T>::top(void)
{ return stack.top(); }

template<typename T>
const T	&MutantStack<T>::top(void) const
{ return stack.top(); }

template<typename T>
bool	MutantStack<T>::empty(void) const
{ return stack.empty(); }

template<typename T>
size_t	MutantStack<T>::size(void) const
{ return stack.size(); }

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{ return stackToContainer().begin(); }

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{ return stackToContainer().end(); }

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{ return stackToContainer().begin(); }

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{ return stackToContainer().end(); }

template <typename T>
typename std::stack<T>::container_type MutantStack<T>::stackToContainer() const
{
	typename std::stack<T>::container_type container;
	std::stack<T> tempStack = stack;

	while (!tempStack.empty())
	{
		container.push_back(tempStack.top());
		tempStack.pop();
	}
	return container;
}
