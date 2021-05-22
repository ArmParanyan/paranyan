// 2 i astichan
// araji tarberak
#include <iostream>
using namespace std;
// bool baseTwo(int n)
// {
//     int m = n;
//     while(m % 2 == 0)
//     {
//         m /= 2;
//     }
//     return m == 1;
// }

// erkror tarberak

bool baseTwo(int n)
{
    int m =  1;
    while(m < n)
    {
        m *= 2;
    }
    return m == n;
}

int main()
{
   cout << baseTwo(10);
    return 0;
}
