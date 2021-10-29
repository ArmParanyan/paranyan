#include <iostream>
using namespace std;
template <typename T>
void buble(int n, T arr[])
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n - i -1; j++)
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
			}
}
template <typename T>
void Print(T arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n\n";
}
int main()
{
	int arr[] = { 1, 10, 90, 100 };
	int n = sizeof(arr) / sizeof(int);
	Print(arr, n);
	buble(n, arr);
	Print(arr, n);
}
