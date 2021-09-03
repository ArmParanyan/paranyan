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

int veradarcnox(Person * per, int size1)
{

     for(int i = 0; i < size1; i++)
        {

                cout << per[i].name.c_str() << " ; " ;
        }
        
        return 0;
 
}

int main()
{
        Person per[5];

        per[0].name = "Amen";
        per[0].surname = "Paranyan";
        per[0].gender = 1;
        per[0].age = 17;
        per[0].salary = 120000;
 
        per[1].name = "Samvel";
        per[1].surname = "Hovsepyan";
        per[1].gender = 1;
        per[1].age = 17;
        per[1].salary = 120000;

        per[2].name = "Areg";
        per[2].surname = "Hunanyan";
        per[2].gender = 1;
        per[2].age = 17;
        per[2].salary = 120000;

        per[3].name = "Alik";
        per[3].surname = "Harutunyan";
        per[3].gender = 1;
        per[3].age = 17;
        per[3].salary = 120000;

        per[4].name = "Narek";
        per[4].surname = "Harutunyan";
        per[4].gender = 1;
        per[4].age = 17;
        per[4].salary = 120000;
        
       veradarcnox(per, 5);
}
