#include <iostream>
using namespace std;
class Vhicle
{
        private:
        string color;
        int weigth;
        public:
        Vhicle(string aColor, int aweight)
        {
                color = aColor;
                weigth= aweight;
        }
        Vhicle()
        {

        }
        void set_Color(string a)
        {
                a = "red";
        }
        string get_Color(string a)
        {
                a = "red";
                return a;
        }

        void set_Weight(int a)
        {
                a = 50;
        }

        int get_Weight(int a)
        {
                a = 50;
                return a;
        }
};

class Bike:public Vhicle
{
        private:
        int m_pedal;
        public:
        Bike(string Color, int weight, int pedal):Vhicle(Color, weight)
        {
                m_pedal = pedal;
        }
        void set_pedal(int a)
        {
                a = 2;
        }
        int get_pedal(int a)
        {
                a = 2;
                return a;
        }
};

int main()
{
        
}
