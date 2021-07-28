#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char buf[] = "helLO";
    int count = 0, count1 = 0;
    for(int i = 0; i < strlen(buf); i++)
    {
        if(buf[i] >= 65 && buf[i] <= 90)
        {
         ++count ;
        }
    else
        if(buf[i] >= 97 && buf[i] <= 122)
       {
         ++count1;
        }
    }
     cout << count << " " << count1;
    

}
