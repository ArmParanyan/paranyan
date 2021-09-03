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

// void veradarcnox(Person * per, int size)
// {
//      for(int i = 0; i < size; i++)
//         {
//                 cout << per[i].name << " ; ";
//         }       
// }

void sal(Person * per, int size)
{
        for(int i = 0; i < size; i++)
        {
                if(per[i].salary > 150000)
                {
                        cout << per[i].name << " , " << per[i].surname <<" ; ";
                }
        }

}

int main()
{
        Person per[5];

        per[0].name = "Armen";
        per[0].surname = "Paranyan";
        per[0].gender = 1;
        per[0].age = 17;
        per[0].salary = 200000;
 
        per[1].name = "Samvel";
        per[1].surname = "Hovsepyan";
        per[1].gender = 1;
        per[1].age = 17;
        per[1].salary = 170000;

        per[2].name = "Areg";
        per[2].surname = "Hunanyan";
        per[2].gender = 1;
        per[2].age = 17;
        per[2].salary = 160000;

        per[3].name = "Alik";
        per[3].surname = "Harutunyan";
        per[3].gender = 1;
        per[3].age = 17;
        per[3].salary = 120000;

        per[4].name = "Narek";
        per[4].surname = "Harutunyan";
        per[4].gender = 1;
        per[4].age = 17;
        per[4].salary = 130000;
        
        sal(per, 5);
}
