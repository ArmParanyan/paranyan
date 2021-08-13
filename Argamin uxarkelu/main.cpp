#include <iostream>
using namespace std;
#define ARR_SIZE 13
int main()
{
        char arr[] = "aabadab 18abk";
        int freq[ARR_SIZE] = {0}; 
        int count = 0;
        for(int i = 0; i < ARR_SIZE; i++)
        {
                if(freq[i] == -1)
                {
                   continue;
                }
                for(int j = i + 1; j < ARR_SIZE; j++)
                {
                        if(arr[i] == arr[j])
                        {
                                count++;
                                freq[j] = -1;
                        }
                } 
        } 
}
