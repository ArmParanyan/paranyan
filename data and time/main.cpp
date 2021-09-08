#include <iostream>
using namespace std;
class Time
{

        private:
        string year;
        string month;
        string day;
        string hour;
        string minute;
        string second;

        public:
       Time(string ayear, string amonth, string aday, string ahour, string aminute, string asecond)
       {
               year = ayear;
               month = amonth;
               day = aday;
               hour = ahour;
               minute = aminute;
               second = asecond;
       }
              
         void getTimeForm1()
         {
          cout << year << "Y" << month << "M" << day << "D" << hour << ":" << minute <<":"<<second;
         }

         void getTimeForm2()
         {
          cout << year << "-" << month << "-" << day << "-" << hour << "H" << minute <<"M"<<second << "S";
         }

          void getTimeForm3()
         {
          cout << hour << ":" << minute << ":" << second << "Y" << year << "M" << month << "D"<< day;
         }

         
};

int main()
{
        Time t("2021", "9", "8", "8", "46", "30");
        t.getTimeForm1();
}
