#include <iostream>
using namespace std;

bool  parztiv(int a, int b)
{
    bool isPrime = true;
    if(a%2==0)
    {
        a++;
    }
    for(int i = a  ; i<=b ; i+=2)
    {
        isPrime = true;
        for(int j = 2 ; j <= i/2 ; j++)
        {
            if ( i % j == 0 )
            {
              isPrime=false;
              break;
            }
        }
        if (isPrime)
        {
            cout << i << " is prime number" << endl;
        }
    }
}

int main()
{
       cout << parztiv(5,15);
}
