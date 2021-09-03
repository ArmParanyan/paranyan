#include <iostream>
using namespace std;

 class Person
 {
 public:
   string name;
   string surname;
   int gender;
   int age;
   int salary;
};

int main()
{
        Person*pers1 = new Person;
        pers1->name = "Armen";
        pers1->surname = "Paranyan";
        pers1->gender = 1;
        pers1->age = 17;
        pers1->salary = 120000;
        cout << pers1->name << endl;
        cout << pers1->age << endl;
        delete pers1;
}
