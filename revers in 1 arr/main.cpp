#include <iostream>
#define ARR_SIZE 5
using namespace std;
int main()
{
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cin >> arr[i];
    }
    cout << "ARR is: " ;
    {
        for(int i = 0 ; i < ARR_SIZE; i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << "REVERS ARR IS: ";
    {
        for(int i = ARR_SIZE - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
}
