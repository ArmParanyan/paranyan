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
    
    for(int i = 0; i < ARR_SIZE; i++)
    {
        arr2[i] = arr[5 - 1 - i];
    }
    
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << arr2[i];
    }
}
