#include <iostream>
using namespace std;

class Person
{
        public:
        Person(string name, string fullname, int age);
        Person& operator=(const Person& p);
        void printName();

        private:
        string aname;
        string afullname;
        int aage;


};

Person::Person(string name, string fullname, int age)
{
                aname = name;
                afullname = fullname;
                aage = age;                
}

 Person& Person::operator=(const Person& p)
 {
         if(this == &p)
         return *this;
         aname = p.aname;
         afullname = p.afullname;
         aage = p.aage;
         return *this;
 }

void Person::printName()
{
        cout << "name= " << aname << endl;
        cout << "fullname= " << afullname << endl;
        cout << "age= " << aage << endl;
}


int main()
{
        Person p1("Armen", "Paranyan", 17);
        p1.printName();

        Person p2("Areg", "Hunanyan", 20);
        p1 = p2;
        p1.printName();
        
}
