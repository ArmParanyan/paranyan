#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
        private:
        char* begin;

        public:
        MyString(char* abegin)
        {
                begin = abegin;
        }
        MyString& operator=(MyString& obj);
        friend  MyString operator+(char* str1, string str2);
        void printName();
};

MyString& MyString::operator=(MyString& obj)
{
        if(this == &obj)
         return *this;
         char* str1;
         char* str2;
         str1 = obj.begin;
         str2 = obj.begin;
         return *this;
}

 MyString  operator+(string obj1, string obj2)
{
        char* str = new [strlen(obj1.begin) + strlen(obj2.begin)];
        strcpy(str, obj1.begin);
            
}

void MyString::printName()
{
        
}

int main()
{
        
}
