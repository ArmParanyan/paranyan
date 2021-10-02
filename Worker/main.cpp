#include <iostream>
#include <time.h>
using namespace std;
enum Post
{
        FINANCIAL_DIRECTOR, GENERAL_DIRECTOR, OPERATIONAL_DIRECTOR
};

class Worker
{
        string name;
        string fullname;
        int salary;
        public:
        Worker(string name="", string fullname="", int salary = 0)
        {
                this->name = name;
                this->fullname = fullname;
                this->salary = salary;
        }
        void set_Name(string name)
        {
                this->name = name;
        }
        void set_fullname(string fullname)
        {
                this->fullname = fullname;
        }
        void set_salary(int salary)
        {
                this->salary = salary;
        }
        string get_name()
        {
                return name;
        }
        string get_fullname()
        {
                return fullname;
        }
        int get_salary()
        {
                return salary;
        }
        virtual void run()
        {
                cout << "i am working" << endl;
        }
        virtual void print()
        {
                cout << "Name - " << name << endl << "Fullnmae- " << fullname << endl << "salary - " << salary << endl;
        }
};

class Engineer:public Worker
{
        int position;
        public:
        Engineer(string name = "", string fullname = "", int salary = 0, int position = 0):Worker(name, fullname, salary)
        {
                this->position = position;
        }
        void set_position(int pos)
        {
                position = pos;
        }
        int get_position()
        {
                return position;
        }
        void run()
        {
                cout << "I am Engineer" << endl;
        }
        void print()
        {
                Worker::print();
                cout << "Position - " << position << endl;
        }
};

class Manager:public Worker
{
        string status;
        public:
        Manager(string name = "", string fullname = "", int salary = 0, string status = 0):Worker(name, fullname, salary)
        {
                this->status = status;
        }
        void get_status(string status)
        {
                this->status = status;
        }
        string get_status()
        {
                return status;
        }
        void run()
        {
                cout << "I am Manager" << endl;
        }
        void print()
        {
                Worker:print();
                cout << "Status - " << status << endl;
        }
};

class Director:public Worker
{
        Post ps;
        public:
        Director(string name = "", string fullname = "", int salary = 0, Post p = GENERAL_DIRECTOR)
        {
                this->ps = p;
        }
        void set_post(Post p)
        {
                ps = p;
        }
        Post get_post()
        {
                return ps;
        }
        void run()
        {
                cout << "I am director" << endl;
        }
        void print()
        {
                Worker::print();
                cout << "Post - " << ps << endl;
        }
};

int main()
{
   string names[4] = {"Armen", "Narek", "Hayk", "Vahe"};
   Worker* arr[4];
   srand(time(NULL));
   for(int i = 0; i < 4; i++)
   {
           switch(rand() % 4)
           {
                case 1:
                   arr[i] = new Engineer(names[rand() % 4], "  ", rand() % 10 * 10000);
                   break;
                case 2:
			arr[i] = new Manager(names[rand() % 4], "___", rand() % 10 * 10000, "some status here");
			break;
	        case 3:
			arr[i] = new Director(names[rand() % 4], "___", rand() % 10 * 10000,(Post)(rand()%3));
			break;
		default: 
			arr[i] = new Worker(names[rand() % 4], "___", rand() % 10 * 10000);
			break;
           }
   }     
   for(int i = 0; i < 4; i++)
   {
           arr[i] -> run();
           arr[i] -> print();
           cout << endl;
   }
}
