#include "../includes/MutantStack.hpp"

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void)
{ return this->c.begin(); }

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void)
{ return this->c.end(); }

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::begin(void) const
{ return this->c.begin(); }

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::end(void) const
{ return this->c.end(); }
