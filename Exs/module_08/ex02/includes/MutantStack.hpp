#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <deque>
#include <iterator>
#include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		// Iterator typedefs
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		// Custom iterators
		iterator		begin(void);
		iterator		end(void);
		const_iterator	begin(void) const;
		const_iterator	end(void) const;
};

#include "../srcs/MutantStack.tpp"

#endif
