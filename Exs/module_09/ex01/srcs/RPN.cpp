#include "../includes/RPN.hpp"

bool isValidRPN(const std::string &expression)
{
	std::stack<int> stack;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1))
		{
			try
			{
				int number = std::stoi(token);
				stack.push(number);
			}
			catch (std::exception &e) { return false; }
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
	return true;
}

RPN	*buildExpressionTree(const std::string &expression)
{
	std::queue<std::string> tokens;
	std::stack<RPN *> stack;
	size_t pos = 0;

	while (pos < expression.length())
	{
		while (pos < expression.length() && expression[pos] == ' ')
			pos++;
		if (pos == expression.length())
			break;
		size_t spacePos = expression.find(' ', pos);
		if (spacePos == std::string::npos)
			spacePos = expression.size();
		std::string token = expression.substr(pos, spacePos - pos);
		if (!token.empty())
			tokens.push(token);
		pos = spacePos + 1;
	}

	while (!tokens.empty())
	{
		std::string token = tokens.front();
		tokens.pop();

		RPN *newNode = new RPN;
		newNode->value = token;
		newNode->left = NULL;
		newNode->right = NULL;
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (stack.size() < 2)
			{
				std::cerr << "Invalid RPN expression" << std::endl;
				delete newNode;
				while(!stack.empty())
				{
					delete stack.top();
				 	stack.pop();
				}
				return NULL;
			}
			newNode->right = stack.top();
			stack.pop();
			newNode->left = stack.top();
			stack.pop();
		}
		stack.push(newNode);
	}
	if (stack.size() != 1)
	{
		std::cerr << "Invalid RPN expression" << std::endl;
		while (!stack.empty())
		{
			delete stack.top();
			stack.pop();
		}
		return NULL;
	}
	return (stack.top());
}

double	evaluateExpression(RPN *root)
{
	if (root == NULL)
		return (0.0);
	else if (root)
	{
		if (root->value == "*")
			return (evaluateExpression(root->left) * evaluateExpression(root->right));
		else if (root->value == "/")
		{
			double denominator = evaluateExpression(root->right);
			if (denominator == 0.0)
			{
				std::cerr << "Error: Division by zero" << std::endl;
				return 0.0;
			}
			return (evaluateExpression(root->left) / denominator);
		}
		else if (root->value == "+")
			return (evaluateExpression(root->left) + evaluateExpression(root->right));
		else if (root->value == "-")
			return (evaluateExpression(root->left) - evaluateExpression(root->right));
		else
			{
				double result = 0.0;
				std::istringstream iss(root->value);
				iss >> result;
				return result;
			}
	}
	return (0.0);
}

void deleteExpressionTree(RPN *root)
{
	if (root == NULL)
		return ;
	deleteExpressionTree(root->left);
	deleteExpressionTree(root->right);

	root->left = NULL;
	root->right = NULL;
	delete root;

	// std::stack<RPN*> nodeStack;
	// nodeStack.push(root);

	// while (!nodeStack.empty())
	// {
	// 	RPN* currentNode = nodeStack.top();
	// 	nodeStack.pop();

	// 	if (currentNode->left != NULL)
	// 		nodeStack.push(currentNode->left);
	// 	if (currentNode->right != NULL)
	// 		nodeStack.push(currentNode->right);

	// 	delete currentNode;
	// }
}

