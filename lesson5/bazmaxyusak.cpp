#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum =0;
    
    cout << "Enter your number= ";
    cin >> num;
    
    for (int i = 0; i <= 10; ++i)
    {
        
      sum = num * i;
      cout << sum << endl;
    }


}
