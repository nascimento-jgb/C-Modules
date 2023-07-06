#include "../includes/PmergeMe.hpp"

//Vector Algorithm Solution
void	vectorInsertionSort(std::vector<int> &arr, int low, int high)
{
	 for (int i = low + 1; i <= high; ++i)
	 {
		int key = arr[i];
		int j = i - 1;
		while (j >= low && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void	vectorMerge(std::vector<int> &arr, int low, int mid, int high)
{
	int leftSize = mid - low + 1;
	int rightSize = high - mid;

	std::vector<int> left(leftSize);
	std::vector<int> right(rightSize);

	for (int i = 0; i < leftSize; ++i)
		left[i] = arr[low + i];

	for (int j = 0; j < rightSize; ++j)
		right[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = low;

	while (i < leftSize && j < rightSize)
	{
		if (left[i] <= right[j])
		{
			arr[k] = left[i];
			++i;
		}
		else
		{
			arr[k] = right[j];
			++j;
		}
		++k;
	}
	while (i < leftSize)
	{
		arr[k] = left[i];
		++i;
		++k;
	}
	while (j < rightSize)
	{
		arr[k] = right[j];
		++j;
		++k;
	}
}

void	vectorMergeInsertionSort(std::vector<int> &arr, int low, int high)
{
	   if (low < high) {
		// Check if the subarray is small enough to use insertion sort
		if (high - low + 1 <= 5) {
			vectorInsertionSort(arr, low, high);
		}
		else {
			int mid = low + (high - low) / 2;

			// Recursively sort the subarrays
			vectorMergeInsertionSort(arr, low, mid);
			vectorMergeInsertionSort(arr, mid + 1, high);

			// Merge the sorted subarrays
			vectorMerge(arr, low, mid, high);
		}
	}
}

//Deque Algorithm Solution
void	dequeInsertionSort(std::deque<int> &arr, int low, int high)
{
	 for (int i = low + 1; i <= high; ++i)
	 {
		int key = arr[i];
		int j = i - 1;
		while (j >= low && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void	dequeMerge(std::deque<int> &arr, int low, int mid, int high)
{
	int leftSize = mid - low + 1;
	int rightSize = high - mid;

	std::deque<int> left(leftSize);
	std::deque<int> right(rightSize);

	for (int i = 0; i < leftSize; ++i)
		left[i] = arr[low + i];

	for (int j = 0; j < rightSize; ++j)
		right[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = low;

	while (i < leftSize && j < rightSize)
	{
		if (left[i] <= right[j])
		{
			arr[k] = left[i];
			++i;
		}
		else
		{
			arr[k] = right[j];
			++j;
		}
		++k;
	}
	while (i < leftSize)
	{
		arr[k] = left[i];
		++i;
		++k;
	}
	while (j < rightSize)
	{
		arr[k] = right[j];
		++j;
		++k;
	}
}

void	dequeMergeInsertionSort(std::deque<int> &arr, int low, int high)
{
	   if (low < high) {
		// Check if the subarray is small enough to use insertion sort
		if (high - low + 1 <= 5) {
			dequeInsertionSort(arr, low, high);
		}
		else {
			int mid = low + (high - low) / 2;

			// Recursively sort the subarrays
			dequeMergeInsertionSort(arr, low, mid);
			dequeMergeInsertionSort(arr, mid + 1, high);

			// Merge the sorted subarrays
			dequeMerge(arr, low, mid, high);
		}
	}
}

// Auxiliar functions
std::vector<int>	ConvertStringToIntVector(const std::string &expression)
{
	std::vector<int>	res;
	std::istringstream	iss(expression);
	int					num;

	while (iss >> num)
		res.push_back(num);
	return res;
}

std::deque<int>	ConvertStringToIntDeque(const std::string &expression)
{
	std::deque<int>		res;
	std::istringstream	iss(expression);
	int					num;

	while (iss >> num)
		res.push_back(num);
	return res;
}

void	PrintVectorArray(std::vector<int> &arr)
{
	for (unsigned long i = 0; i < arr.size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void	PrintDequeArray(std::deque<int> &arr)
{
	for (unsigned long i = 0; i < arr.size(); ++i)
			std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int		elementCount(const std::string &expression)
{
	int	count = 0;

	for (unsigned long i = 0; i < expression.size(); ++i)
	{
		if (!isdigit(expression[i]) && isdigit(expression[i - 1]))
			count++;
		if ( i == expression.size() - 1 && isdigit(expression[i]))
			count++;
	}
	return count;
}

std::string	executeCommand(const std::string &command)
{
	std::string result;

	FILE* pipe = popen(command.c_str(), "r");
	if (pipe)
	{
		char buffer[128];
		while (!feof(pipe))
		{
			if (fgets(buffer, 128, pipe) != NULL)
			{
				result += buffer;
			}
		}
		pclose(pipe);
	}
	return (result);
}
