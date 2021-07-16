#include <iostream>
using namespace std;

int main()
{
    int sum;
    cout << "enter five digits number ";
    cin >> sum;
    int num1 = (sum / 1000) % 10;
    int num2 = (sum / 100) % 10;
    int num3 = (sum / 10) % 10;
    int num4 = (sum / 1) % 10;
    int result = num1 + num2 + num3 + num4;

    cout << num1 << "+" << num2 << "+" << num3 << "+" << num4 << "=" << result;

}
