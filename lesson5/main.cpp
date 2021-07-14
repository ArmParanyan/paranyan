#include <iostream>
using namespace std;
int main()

{
 int num1;
    int num2;
    int max, min;
    int sum = 0;
    int count = 4;
    while(count--)
    {
    cout << "enter first number= ";
        cin >> num1;
    cout << "enter second number= ";
        cin >> num2;
    
    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
               
       
  for (int i = min; i <= max; ++i)
    {
      
    sum += i;
    }
 
     cout << sum << endl;
    }
}
