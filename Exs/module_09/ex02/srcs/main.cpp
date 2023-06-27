#include "../includes/PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2 && isValidRPN(argv[1]))
	{
		RPN *root = buildExpressionTree(argv[1]);
		inorderTraversal(root);
		double result = evaluateExpression(root);
		std::cout << " => Result: " << result << std::endl;
	}
	else
		std::cerr << "Input failed, try again!" << std::endl;
	return 0;
};
