#include <iostream>
using namespace std;
int main()
{
int arr[50], del, count = 0, size;
cout << "ENTER ARRAY SIZE: ";
cin >> size;
cout << "ENTER ARRAY: ";
for (int i = 0; i < size; i++)
{
        cin >> arr[i];
}
cout << "ENTER NUMBER TO DELETE  ";
cin >> del;
for(int i = 0; i < size; i++)
{
        if(arr[i] == del)
        {
                for(int j = i; j < (size - 1); j++)
                {
                        arr[j] = arr[j + 1];
                }
                count ++;
                break;
        }
}
if(count == 0)
{
        cout << "\nNO ELEMENTS FOUND:\n";
}
else 
{
        cout << "ELEMENT DELETED:  " << endl;
        cout << "NEW ARRAY IS: ";

for(int i = 0; i < size - 1; i++)
{
        cout << arr[i] << " ";
}
}
}
