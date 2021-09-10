#include <iostream>
using namespace std;
class Parces
{
  string text;
  public:
  Parces(string atext)
  {
      text = atext;
  }
  void PrintText();
};
void Parces::PrintText()
{
   cout << text;
}
int main()
{
        Parces p("Hello Word, I am a student");
        p.PrintText();
}

