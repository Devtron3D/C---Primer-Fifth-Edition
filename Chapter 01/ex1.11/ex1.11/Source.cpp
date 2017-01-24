// Exercise 1.11

#include <iostream>

int main()
{
	std::cout << "Enter two numbers." << std::endl;

	int first = 0, second = 0;
	std::cin >> first >> second;

	while (first <= second)
	{
		std::cout << first << std::endl;
		++first;
	}
	
	system("pause");  // Used to keep consol window open. workes in MS Windows.
	return 0;
}
