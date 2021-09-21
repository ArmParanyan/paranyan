#include <iostream>
#include <time.h>
using namespace std;

class Employee
{
        int m_eoloyee_id;
        int m_account;

        public:
        
        void setEmployeeID(int k)
        {
                m_eoloyee_id = k;
                m_account = k;
        }

        void creditAccount(int k)
        {
                m_account += k;
        }

        void debitAccount(int k)
        {
                m_account -= k;
        }
        int getAccount()
        {
                return m_account;
        }
};

int main()
{
        const int n = 6;
        Employee staf[n];
        for(int i = 0; i < n; i++)
        {
                staf[i].setEmployeeID(i+1);
        }
        srand(time(NULL));
        for(int i = 0; i < n; i++)
        {
                if(rand() % 2)
                {
                        staf[i].creditAccount(rand() % 100);
                }
                else
                {
                       staf[i].debitAccount(rand() % 100) ;
                }
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
                sum += staf[i].getAccount();
        }
        cout << sum;
        
}
         
