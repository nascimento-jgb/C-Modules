#include "../includes/RPN.hpp"

bool	expressionValidation(const std::string &expression)
{
	bool	consecutiveOperators = false;
	bool	hasOperators = false;

	if (expression.empty())
		return false;
	for (size_t i = 0; i < expression.size(); i++)
	{
		if (i == 0 && (expression[i] == '+' || expression[i] == '*' || expression[i] == '/'))
			return false;
		else if (!isdigit(expression[i]) && expression[i] != ' ' && expression[i] != '-' && expression[i] != '+' && expression[i] != '*' && expression[i] != '/')
			return false;
		else if ((expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') && i > 0)
		{
			hasOperators = true;
			if ((expression[i + 1] == '+' || expression[i + 1] == '-' || expression[i + 1] == '*' || expression[i + 1] == '/') && i == (expression.size() - 1))
				{
					consecutiveOperators = true;
					break;
				}
		}
	}
	std::cout << hasOperators << " - " << consecutiveOperators << std::endl;
	if (hasOperators && !consecutiveOperators)
		return true;
	else
		return false;
}

bool	isInfixExpression(const std::string &expression)
{
	std::stack<char> parenthesesStack;
	bool hasOperands = false;
	bool hasOperators = false;
	bool expectingOperand = true;

	for (size_t i = 0; i < expression.size(); ++i) {
		char currentChar = expression[i];

		if (isdigit(currentChar)) {
			if (!expectingOperand) {
				return false;
			}
			hasOperands = true;
			expectingOperand = false;
		} else if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
			if (expectingOperand)
				return false;
			hasOperators = true;
			expectingOperand = true;
		} else if (currentChar == '(') {
			parenthesesStack.push(currentChar);
			expectingOperand = true;
		} else if (currentChar == ')') {
			if (parenthesesStack.empty() || parenthesesStack.top() != '(')
				return false;
			parenthesesStack.pop();
			expectingOperand = false;
		} else if (currentChar == ' ') {
			continue;
		} else {
			return false;
		}
	}

	if (hasOperands && hasOperators && parenthesesStack.empty())
		return true;
	return false;
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
