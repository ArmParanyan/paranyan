#include <iostream>
using namespace std;
int main()
{
    int sum ;
    cout << "ENTER YOUR 4 digit number: ";
    cin >> sum;
    int num1 = (sum / 1000) % 10;
    int num2 = (sum / 1) % 10;
    cout << num1 << " + " << num2 << " = " << num1 + num2;  

}
