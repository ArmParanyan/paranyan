// fibonachii tver
#include <iostream>
using namespace std;
double fib(int n)
{ 
    double prev = 0;
    double current = 1;
    int i = 1;
    while (i < n)
    {
        double temp = current;
        current = current + prev;
        prev = temp;
        i++;
    }
    return current;
}

 int isFib(int x)
{ 
    double prev = 0;
    double current = 1;
   
    while (current < x)
    {
        double temp = current;
        current = current + prev;
        prev = temp;
    }
    return current == x;
}
int main()
{
     cout << isFib(34);

    return 0;
}
