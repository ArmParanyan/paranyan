#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Enter number= ";
	cin >> n;
	bool parz = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			parz = false;
		}
	}
	if (parz == true)
	{
		cout << "tivy parz e" << endl;
	}
	else
	{
		cout << "tivy parz che" << endl;
	}
	system("pause");
	return 0;
}
