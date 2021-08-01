#include <iostream>
using namespace std;
int main()
{
        int arr[50], add, size, i;
cout << "ENTER ARRAY SIZE: ";
cin >> size;
cout << "ENTER ARRAY: ";
for (int i = 0; i < size; i++)
{
        cin >> arr[i];
}
cout << "ENTER NUMBER TO ADD  ";
cin >> add;
for(int i = 0; i < size; i++)
{
        if(add < arr[i])
        {
                for(int j = size-1; j >= i; j--)
                {
                        arr[j + 1] = arr[j];
                }
                arr[i] = add;
                break;
        }
       
} 
for(int i = 0; i < size + 1; i++)
{
        cout << arr[i] << " ";
}
}
