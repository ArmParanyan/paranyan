#include <iostream>
#define ARR_SIZE 5
using namespace std;
int main()
{
    int arr[ARR_SIZE];
    int max = 0, second_max = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (arr[i] > second_max)
        {
            if(arr[i] == max)
                 continue;
                second_max = arr[i];            
        }
    }
    
    cout << "MAX " << max << "  ";
    cout << "SECOND MAX " << second_max;
}
