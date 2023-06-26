#include "../includes/RPN.hpp"

RPN	*buildExpressionTree(const std::string &expression)
{
	std::queue<std::string> tokens;
	std::stack<RPN *> stack;

	for (size_t pos = 0; pos < expression.size(); pos++)
	{
		size_t spacePos = expression.find(' ', pos);
		if (spacePos == std::string::npos)
			spacePos = expression.size();

		std::string token = expression.substr(pos, spacePos - pos);
		tokens.push(token);
		pos = spacePos + 1;
	}

	while (!tokens.empty())
	{
		std::string token = tokens.front();
		tokens.pop();

		RPN *newNode = new RPN;
		newNode->value = token;
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			newNode->right = stack.top();
			stack.pop();
			newNode->left = stack.top();
			stack.pop();
		}
		stack.push(newNode);
	}
	return (stack.top());
}

double	evaluateExpression(RPN *root)
{
	if (root)
	{
		if (root->value == "*")
			return (evaluateExpression(root->left) * evaluateExpression(root->right));
		else if (root->value == "/")
			return (evaluateExpression(root->left) / evaluateExpression(root->right));
		else if (root->value == "+")
			return (evaluateExpression(root->left) + evaluateExpression(root->right));
		else if (root->value == "-")
			return (evaluateExpression(root->left) - evaluateExpression(root->right));
		else
			return std::stod(root->value);
	}
	return (0.0);
}
void	inorderTraversal(RPN *root)
{
	if (root)
	{
		inorderTraversal(root->left);
		std::cout << root->value << " ";
		inorderTraversal(root->right);
	}
}
