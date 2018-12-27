#include <iostream>
#include <vector>

int El_Count = 0;

int main()
{
	int arr[] = {2, 6, 8, 3};

	std::cout << std::endl;

	/* 
		// Old version

		for each(int var int arr)
		{
			std::cout << var << std::endl;
		}

	*/

	// A new version

	for (int it : arr)
	{
		std::cout << std::endl << "   |      arr[" << El_Count << "] = "<< it << std::endl;
		El_Count++;
	}

	El_Count = 0;

	std::cout << std::endl << " --------------------------------------------------------- " << std::endl;

	for (int &it : arr)
	{

		it = 1; // arr[it] = 1;

		std::cout << std::endl << "   |      arr[" << El_Count << "] = " << it << std::endl;
		El_Count++;
	}

	El_Count = 0;

	std::cout << std::endl << " --------------------------------------------------------- " << std::endl;

	std::vector<int> myVector = {4, 5, 6};

	for (int it : myVector)
	{
		std::cout << std::endl << "   |      myVector[" << El_Count << "] = " << it << std::endl;
		El_Count++;
	}

	El_Count = 0;

	char a[100]; std::cin >> a;
}