#include <iostream>
#include <time.h>
using namespace std;
class Manal
{
        int milkrate;
        int age;
        public:
        Manal()
        {
                milkrate = 0;
                age = 0;
        }
        Manal(int amilkKate, int aAge)
        {
                milkrate = amilkKate;
                age = aAge;
        }
        void set_milkrate()
        {

        }
        int get_milkrate()
        {
                return 0;
        }
        void set_age()
        {

        }
        int get_age()
        {
                return 0;
        }
        virtual void about()
        {
                cout << "Manal animals" << endl;
        }
};

class Bird
{
        bool  Fly;
        int wingSize;
        public:
        Bird()
        {
                Fly = 0;
                wingSize = 0;
        }
        Bird(bool aFly, int awingSize)
        {
                Fly = aFly;
                wingSize = awingSize;
        }
        void set_Fly()
        {

        }
        bool get_Fly()
        {
                return 0;
        }
        void set_wingSize()
        {

        }
        int get_wingSize()
        {
                return 0;
        }
};

class Eagle:public Manal, public Bird
{
        int flyHeigth;
        int flySpeed;
        int flyDistanse;
        public:
        Eagle()
        {
               flyHeigth = 0;
               flySpeed = 0;
               flyDistanse = 0;
        }
        Eagle(int aflyHeigth, int aflySpeed, int aflyDistanse):Manal(), Bird()
        {
                flyHeigth = aflyHeigth;
                flySpeed = aflySpeed;
                flyDistanse = aflyDistanse;
        }
        void set_flyHeigth()
        {
                
        }
        int get_flyHeigth()
        {
                return 0;
        }
        void set_flySpeed()
        {

        }
        int get_flySpeed()
        {
                return 0;
        }
        void set_flyDistanse()
        {

        }
        int get_flyDistanse()
        {
                return 0;
        }

        virtual void about()
        {
                cout << "Eagle" << endl;
        }
};

class Pinguin:public Manal, public Bird
{
        int swimspeed;
        public:
        Pinguin()
        {
                swimspeed = 0;
        }
        Pinguin(int aswimspeed)
        {
                swimspeed = aswimspeed;
        }
        void get_swimspeed()
        {

        }
        int set_swimspeed()
        {
                return 0;
        }
        virtual void about()
        {
                cout << "Pinguin" << endl;
        }
};


int main()
{
        const int size = 4;
        Eagle* arr[size];
        srand(time(NULL));
        for(int i = 0; i < size; i++)
        {
                switch(rand() % 4)
                {
                        case 1: 
                        arr[i] = new Eagle(5, 10, 15);
                        break;
                        case 2:
                        arr[i] = new Pinguin(10);
                }
        }
}
