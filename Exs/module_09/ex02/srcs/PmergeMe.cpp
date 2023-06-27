#include "../includes/RPN.hpp"

bool isValidRPN(const std::string &expression)
{
	std::stack<int> stack;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			int number = token[0] - '0';
			if (number < 0 || number > 9)
				return false;
			stack.push(number);
		}
		else if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/'))
		{
			if (stack.size() < 2)
				return false;
			stack.pop();
			stack.pop();
			stack.push(0);
		}
		 else
			return false;
	}
	return stack.size() == 1;
}

RPN	*buildExpressionTree(const std::string &expression)
{
	std::queue<std::string> tokens;
	std::stack<RPN *> stack;
	size_t pos = 0;

	while (pos < expression.size())
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
			{
				try{
					return std::stod(root->value);
				}
				catch (std::exception &e){
					std::cerr<< "Invalid input!" << std::endl;
				}
			}
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
