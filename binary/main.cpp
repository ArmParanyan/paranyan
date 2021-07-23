#include <iostream>
using namespace std;
int main()
{
        int num, sum;
        cin >> sum;
        while (num > 0)
        {
                sum = num % 2;
                num /= 2;
                cout << sum;
        }
        
        cout << endl;
}
