#include <iostream>
#include <string.h>
#define MAX_SIZE 100
using namespace std;
template <typename TYPE>
class Circulararray
{
        TYPE arr[MAX_SIZE];
        int front;
        int back;
        int size;
        public:
        Circulararray(int size = 0)
        {
                front = -1;
                back = 0;
                this->size = size;
        }
        bool isEmpty()
        {
                return (front == -1);
        }
        bool isFull()
        {
                return ((front == 0 && back == size - 1) || (front == back +1));
        }
        bool insertElementBack(TYPE el)
        {
                if(isFull())
                {
                        return  false;
                }
                if(front == -1)
                {
                        front = 0;
                        back = 0;
                }
                else if(back == size -1)
                {
                        back = 0;
                }
                else 
                back++;
                arr[back] = el;
                return true;
        }
        TYPE removeElementFront()
        {
                TYPE k = arr[front];
                if(front == -1)
                {
                        cout << "UNDERFLOW" << endl;
                        return -1.0;
                }
                if(front == back)
                {
                        front = -1;
                        back = -1;
                }
                else if(front == size - 1)
                {
                        front = 0;
                }
                front = front +1;
                return k;
        }
        
};

void parse(string exp, char& c, double& a, double& b)
{
        a =0;
        b = 0;
        int i = 0;
        bool foundOperation = false;
        bool foundPoint = false;
        for(int i = 0; i < exp.lenght(); i++) 
        {
                if(exp[i] == ' ')
                continue;
                if(exp[i] == '.')
                foundPoint = true;
                if(exp[i] <='9' && exp[i] >= '0')
                {
                        if(foundOperation)
                        {
                        b = b * 10 + (exp[i] -  '0');
                        if(foundPoint)
                         {
                                b = b / 10;
                         }
                        }
                        else 
                        {
                               a = a * 10 + (exp[i] -'0');
                               if(foundPoint)
                               {
                                       a /= 10;
                               } 
                        }
                }
                if(exp[i] == '-' || exp[i] == '*' || exp[i] == '+' || exp[i] == '/')
                {
                        c= exp[i];
                        foundPoint = false;
                        foundOperation = true;
                }
        }
}

double calculate(string exp)
{
        char c;
        double a, b;
        parse(exp,c,a,b);
        switch(c)
        {
                case '+':
                return a + b;
                case '-':
                return a - b;
                case '*':
                return a * b;
                case '/':
                return a / b;
                if(b == 0)
                {
                        cout << "cant divide by 0" << endl;
                        return -1.0;
                }
                return a/b;
                default:
                cout << "invalid operation" << endl;
                return -1;
        }
}
int main()
{
        Circulararray<double>arr(3);
        string exp;
        while(true)
        {
                cout << "1. Calculate an arithmetic expression." << endl;
                cout << "2.End.\n" << "Choose an option: ";
                int k = 0;
                cin >> k;
                cout << endl << endl;
                if(k == 1)
                {
                        cout << "Enter an arithmetic expression here:";
                        getline(cin >> ws, exp, '\n');

                        double result = calculate(exp);
                        cout << exp << " = " << result << "\n\n";

                        if(!arr.insertElementBack(result))
                        {
                                cout << "array overflow" << endl;
                                break;
                        }
                }
                else
                {
                        break;
                }
        }
        cout <<"\n\n\n";
        while(!arr.isEmpty())
        {
                cout << arr.removeElementFront() << endl;
        }
        arr.removeElementFront();
        return 0;
}
