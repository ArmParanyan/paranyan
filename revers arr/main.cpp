#include <iostream>
#define ARR_SIZE 5
#define ARR2_SIZE 5
using namespace std;
int main()
{
    int  arr[ARR_SIZE], arr2[ARR2_SIZE];
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cin >> arr[i];
    }
    int *p = arr;
    for(int i = 4; i >= 0; i--)
    {
        arr2[i] = *p;
        cout << arr2[i] << " " << i << endl;
        p++;
    }
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << arr2[i];
    }
}
