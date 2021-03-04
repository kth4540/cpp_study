#include <iostream>
using namespace std;

void printarray(const int arr[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << arr[index] << " ";
	cout << endl;

}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int arr[], int length)
{
	int min = 0;
	for (int i = 0; i < length; ++i)
	{
		for (int j = i; j < length; ++j)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		swap(&arr[i], &arr[min]);
		min = i + 1;
	}
}
int main()
{
	/*
	3 5 2 1 4
	1 5 2 3 4
	1 2 5 3 4
	1 2 3 5 4
	1 2 3 4 5
	*/

	const int length = 5;
	int arr[length] = { 3,5,2,1,4 };


	sort(arr, length);

	for (int i = 0; i < length; ++i)
		cout << arr[i] << endl;


	return 0;
}
