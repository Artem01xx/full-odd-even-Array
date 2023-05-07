



#include <iostream>
#include <string>

using namespace std;

void FeelArray(int* arr, int SIZE)
{
	for (int i = 0;i < SIZE;i++)
	{
		arr[i] = rand() % 20;
	}
}

void PrintArray(int* arr, int SIZE)
{
	for (int i = 0;i < SIZE;i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	srand(time(NULL));
	int SIZE;
	cout << " Enter Size Of Array " << endl;
	cin >> SIZE;
	cout << "\n";

	int* arr = new int[SIZE];

	FeelArray(arr, SIZE);

	cout << " Full Array " << endl;

	PrintArray(arr, SIZE);

	cout << " ___________________________________ " << endl;

	
	cout << " Odd Array " << endl;

	for (int i = 0;i < SIZE;i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << endl;
		}
		
		else
		{
			continue;
		}
	}

	cout << " __________________________________ " << endl;

	cout << " Array is Even " << endl;

	for (int i = 0;i < SIZE;i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << endl;
		}

		else
		{
			continue;
		}
	}


	delete[]arr;
	return 0;


	
}