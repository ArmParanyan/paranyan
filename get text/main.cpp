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
  string getText();
};

void Parces::PrintText()
{
   cout << text << endl;
}

string Parces::getText()
{
        return text;
}

int main()
{
        Parces p("Hello Word, I am a student");
        p.PrintText();
        cout << p.getText();

}
