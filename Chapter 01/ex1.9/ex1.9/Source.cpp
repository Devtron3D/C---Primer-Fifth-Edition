// Exercise 1.9

#include <iostream>

int main()
{

	int sum = 0, start = 50, end = 100;

	while (start <= end)
	{
		sum += start; // sum up the numbers
		++start;	// increment start
	}

	std::cout << "Sum = " << sum << std::endl;

	system("pause");  // Used to keep consol window open. workes in MS Windows.
	return 0;
}