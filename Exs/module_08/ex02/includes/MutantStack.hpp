#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <iterator>

template <typename T>
class MutantStack
{
	private:
		std::stack<T> stack;

		//helper function
		typename std::stack<T>::container_type stackToContainer() const;

	public:

		// Member functions delegation to std::stack
		void	push(const T &value);
		void	pop(void);
		T		&top(void);
		const T	&top(void) const;
		bool	empty(void) const;
		size_t	size(void) const;

		// Iterator typedefs
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		// Custom iterators
		iterator		begin(void);
		iterator		end(void);
		const_iterator	begin(void) const;
		const_iterator	end(void) const;
};

#include "../srcs/MutantStack.tpp"

#endif
