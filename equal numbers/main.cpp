#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;
  cout << "Enter your first number ";
  cin >> a;
  cout << "Enter your second number ";
  cin >> b;
  
  if(a ^ b) 
    cout << "Not Same"; 
  else  
    cout << "Same";
  
}
