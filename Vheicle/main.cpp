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
               color = "red";
                weigth= 10;
        }
        void set_Color(string a)
        {
                color = a;
        }
        string get_Color()
        {
                return color;
        }

        void set_Weight(int a)
        {
                weigth = a;
        }

        int get_Weight()
        {
                return weigth;
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
                m_pedal = a;
        }
        int get_pedal()
        {
                return m_pedal;
        }
};

int main()
{
        
}
