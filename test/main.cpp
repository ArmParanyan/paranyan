// 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout << "n= ";
    cin >> n;
    
    for(int i = 0; i <= n - 1; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    for(int i = 0; i <= n - 2; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
       {
           if(arr[i] > arr[j])
           {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
    }
    for(int i = 0; i <= n - 1; i++)
    
        cout << arr[i] << " ";
    
    
    return 0;
}

// 6
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout << "n= ";
    cin >> n;
    
    for(int i = 0; i <= n - 1; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    for(int i = 0; i <= n - 2; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
       {
           if(arr[i] > arr[j])
           {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
    }
    for(int i = 0; i <= n - 1; i++)
    
        cout << arr[i] << " ";
    
    
    return 0;
}

//8
#include <iostream>
#include <cmath>
using namespace std;

int x(int a, int b)
{
    return pow(a,b);
}
int main()
{
    cout << x(2,2) << endl;
    return 0;
}

// 9#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int max;

    cout << "n= ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        max = 0;
        if(max < arr[i])
        {
        max = arr[i];
        }
        
    }
  cout << max;
}
