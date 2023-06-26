#include "../includes/RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN *root = buildExpressionTree(argv[1]);
		inorderTraversal(root);
		double result = evaluateExpression(root);

		std::cout << " => Result: " << result << std::endl;
	}
	return 0;
};
