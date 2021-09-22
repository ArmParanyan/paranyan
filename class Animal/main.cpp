#include <iostream>
using namespace std;

class Animal
{
        int HeartBR;
        int EyeSigPer;

        public:
        Animal()
        {
                HeartBR = 0;
                EyeSigPer = 0;
                cout << "ANIMAL defualt constructor  " << endl;
        }
        Animal(int aHeartBR, int aEyeSigPer)
        {
                HeartBR = aHeartBR;
                EyeSigPer = aEyeSigPer;
                cout << "ANIMAL imicilazed constructor  " << endl;
        }
         void setHeartBR(int SHR);
         int getHeartBR();
         void setEyeSigPer(int SESP);
         int getEyeSigPer();
};

class Bird:public Animal
{
        int flySpeed;
        int eat;

        public:
        Bird (int aflySpeed, int aeat)
        {
                flySpeed = aflySpeed;
                eat = aeat;
                cout << "BIRd imicilazed constructor  " << endl;
        }
        void setflySpeed(int SFS);
        int getflySpeed();
        void seteat(int SE);
        int geteat();
};

void Animal::setHeartBR(int SHR)
{
        HeartBR = SHR;
}

int Animal::getHeartBR()
{

        return HeartBR;
}

void Animal::setEyeSigPer(int SESP)
{
        HeartBR = SESP;
}

int Animal::getEyeSigPer()
{

        return EyeSigPer;
}

void Bird::setflySpeed(int SFS)
{
        flySpeed = SFS;
}

int Bird::getflySpeed()
{
        return flySpeed;
}

void Bird::seteat(int SE)
{
        flySpeed = SE;
}

int Bird::geteat()
{
        return eat;
}

int main()
{
        Bird b(30, 64);
        cout << b.getflySpeed() << "  " << b.geteat() << endl;
}
