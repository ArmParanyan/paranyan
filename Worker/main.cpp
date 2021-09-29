#include <iostream>
using namespace std;
class Worker
{
        private:
        string Name;
        string Fullname;
        int Salary;

        public:
        Worker(string aName, string aFullname, int aSalary)
        {
                Name = aName;
                Fullname = aFullname;
                Salary = aSalary;
        }
        Worker()
        {

        }
        void setName()
        {
                cout << "Set Name Worker" << endl;
        }
        string getName()
        {
                return "Get Name Worker";
        }
        void setFullname()
        {
                cout << endl;
                cout << "Set Fullname Worker" << endl;
        }
        string getFullname()
        {
                return "Get Fullname Worker";
        }
        void setSalary()
        {
                cout << endl;
                cout << "Set Salary Worker" << endl;
        }
        int getSalary()
        {
                cout << "Get Salary Worker" << endl;
                return 120000;
                
        }
        virtual void run()
        {
                cout << "RUN WORKER";
        }
};

class Engineer: public Worker
{
        private:
        int M_pose;

        public:
        Engineer(string Name, string Fullname, int Salary, int Pose):Worker (Name, Fullname, Salary)
        {
                M_pose = Pose;
        }

        void setM_pose()
        {
                cout << "set M_pose Engineer" << endl;
        }
        int getM_pose()
        {
                return 0;
                cout << "get M_pose Engineer";
        }
        virtual void run()
        {
                cout << "Run Engineer";
        }
};

class Manager:public Worker
{
        private:
        int M_status;

        public:
         Manager(string Name, string Fullname, int salary, int status):Worker (Name, Fullname, salary)
         {
                 M_status = status;
         }

         void setStatus()
         {
                 cout << "SET STATUS MANAGER";
         }

         int getStatus()
         {
                 cout << "GET STATUS MANAGER";
                 return 0;
         }
};

int main()
{
        

        Worker * p = new Engineer("Armen", "Paranyan", 120000, 2);
         p -> run();


         
      
}
