#include "../includes/MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	// //[...]
	mstack.push(0);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	// MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// std::cout << *it << " - " << *ite << std::endl;
	// ++it;
	// std::cout << *it << " - " << *ite << std::endl;
	// ++it;
	// std::cout << *it << " - " << *ite << std::endl;
	// ++it;
	// std::cout << *it << " - " << *ite << std::endl;
	// ++it;
	// std::cout << *it << " - " << *ite << std::endl;
	while (ite != mstack.begin())
	{
		std::cout << *ite << std::endl;
		--ite;
	}
	// std::stack<int> s(mstack);
	return 0;
}
