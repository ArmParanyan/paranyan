#include <iostream>
#define ARR_SIZE 7
using namespace std;
int main()
{
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else 
        {
            cout << arr[i] << "  ";
        }
    }

}
