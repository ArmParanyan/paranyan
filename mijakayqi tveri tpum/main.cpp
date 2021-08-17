#include <iostream>
using namespace std;
int sum(int a, int b)
{
        if(a > b)
        {
                return;
        }
cout << a << endl; 
       return sum(a + 1, b);
}
int main()
{
 sum(5, 10);
}
