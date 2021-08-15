#include <iostream>
using namespace std;

int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return (n % 10 + sum(n / 10));
}

int main()
{
	int num = 27489;
	int result = sum(num);
	cout << result;
	return 0;
}
