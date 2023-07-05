#include "../includes/RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2 && isValidRPN(argv[1]))
	{
		RPN *root = buildExpressionTree(argv[1]);
		if (root != NULL)
		{
			double result = evaluateExpression(root);
			std::cout << "=> Result: " << result << std::endl;
			deleteExpressionTree(root);
			root = NULL;
		}
		else
			std::cerr << "Invalid expression!" << std::endl;
	}
	else
		std::cerr << "Input failed, try again!" << std::endl;
	return 0;
};
