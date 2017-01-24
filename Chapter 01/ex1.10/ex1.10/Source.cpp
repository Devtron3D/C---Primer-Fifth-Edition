// Exercise 1.10

#include <iostream>

int main()
{

	int output = 0, start = 10, end = 0;

	while (start >= end)
	{
		std::cout << start << std::endl;	// print current value to screen
		--start;	// decrement start
	}

	system("pause");  // Used to keep consol window open. workes in MS Windows.
	return 0;
}