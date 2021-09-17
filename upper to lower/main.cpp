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
//   char findtext();
  void lowerercase();
  void uppercase();
};

void Parces::PrintText()
{
   cout << text << endl;
}

string Parces::getText()
{
        return text;
}

// char findtext()
// {
//         int count;
//         string str = "Hello Word, I am a student";
//         string f = "Hello";
// }

void Parces::lowerercase()
{
        char low[] = "Hello Word, I am a student";
        for(int i = 0; low[i] != 0; i++)
        {
                if(low[i] >= 65 && low[i] <= 90)
                {
                        low[i] = low[i] + 32;
                }
        }
         cout << low;

}

void Parces::uppercase()
{
        char up[] = "Hello Word, I am a student";
        for(int i = 0; up[i] != 0; i++)
        {
                if(up[i] >= 97 && up[i] <= 122)
                {
                        up[i] = up[i] - 32;
                }
        }
        cout << up;
}

int main()
{
        Parces p("Hello Word, I am a student");
        p.PrintText();
        cout << p.getText() << endl;
        p.lowerercase();
        cout << endl;
        p.uppercase();
}
