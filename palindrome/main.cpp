#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char str[] = "ajajk";       
 int length, c;
 length = strlen(str);
 for(int i = 0; i < length; i++)
 {
         if(str[i] != str[length - i - 1])
         {
                 c = 1;
                 break;
         }
 } 
 if(c != 0)
 {
         cout << str << "   is not palindrome:";
 }
 else 
 {
         cout << str << "   is  palindrome:";
 }
}
