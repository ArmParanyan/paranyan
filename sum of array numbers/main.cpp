#include <iostream>
#define ARR_SIZE 5
using namespace std;

int sum(int arr[5], int n)
{
	if (n == 0)
	{
		return 0;
	}
	return (sum(arr, n - 1) + arr[n - 1]);
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 8 };
	int n = sizeof(arr) / sizeof(int);
	cout << sum(arr, n);
}
