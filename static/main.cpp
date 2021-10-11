#include <iostream>
using namespace std;
class Bird
{
        int flyspeed;
        string name;
        int flyheight;
        int winglenght;
        public:
        Bird(int aflyspeed, string aname, int aflyheight, int awinglenght)
        {
                flyspeed = aflyspeed;
                name = aname;
                flyheight = aflyheight;
                winglenght = awinglenght;          
        }
        static int count;  
        static void incrCount();

};

         int Bird::count = 1;
         void Bird::incrCount()
        {
                Bird::count ++;
                cout << Bird::count;
        }

int main()
{
        Bird b(5, "Eagle", 7, 15);
         b.incrCount();
}
