#include <iostream>
#define ARR_SIZE 10
using namespace std;
int main()
{
int arr[ARR_SIZE];
int min, max;
for (int i = 0; i < ARR_SIZE; i++)
{
    cin >> arr[i];
} 
min = arr[0];
max = arr[0];
for (int i = 0; i < ARR_SIZE; i++)
 {
     if(arr[i] < min)
     {
       min = arr[i];
    
     }

     if(arr[i] > max)
     {
       max = arr[i];
 
     }

 }

  cout << "min = " <<  min << " max=" << max << endl;
 


}
