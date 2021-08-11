#include <iostream>
using namespace std;
int main()
{
        int size = 7;
        int arr[7] = {1, 2, 3, 6, 6, 1, 2};
        bool check[size];
        for(int i = 0; i < size; i++)
        {
                check[i] = 0;
        }
        for(int i = 0; i < size; i++)
        {
                if(check[i] == 1)
                {
                        continue;
                }
                int count = 1;
                for(int j = i + 1; j < size; j++)
                {
                        if(arr[i] == arr[j])
                        {
                                check[j] = 1;
                                count++;
                        }
                }
                cout << arr[i] << " -> " << count << endl;
        }
}
