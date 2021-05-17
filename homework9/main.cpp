// 1. 2 tveri artadryal

#include <iostream>
using namespace std;
int artadryal(int a, int b){
    return a * b;
}
int main (){
  cout << artadryal(4,5) << endl;
    return 0;
}

// 1. 3 tveri gumar

#include <iostream>
using namespace std;
int gumar(int a, int b, int c){
    return a + b + c;
}
int main (){
  cout << gumar(4, 5, 1) << endl;
    return 0;
}

// 1. 2 tveri mijin tvabanakan

#include <iostream>
using namespace std;
int mijinTv(int a, int b){
    return (a + b) / 2;
}
int main (){
  cout << mijinTv(10, 8) << endl;
    return 0;
}

// 1. 2 tveric mecaguyn@

#include <iostream>
using namespace std;
int max(int a, int b){
    if ( a > b)
    return a;
    else return b;
}
int main (){
  cout << max(10, 8) << endl;
    return 0;
}

// 1. 2 tveric poqraguyn@

#include <iostream>
using namespace std;
int min(int a, int b){
    if ( a < b)
    return a;
    else return b;
}
int main (){
  cout << min(10, 8) << endl;
    return 0;
}

// 1. 3 tveric mecaguyn@

#include <iostream>
using namespace std;
int max(int a, int b, int c){
    
    if ( a > b && a > c){
    return a;
     }
    else if ( a < b && b > c){
    return b;
    }
    else if ( a < c && b < c){
    return c;
    }

}
int main (){
  cout << max(10, 8, 9) << endl;
    return 0;
}

// 1. 1 tviv 4 astichan

#include <iostream>
#include <math.h>
using namespace std;
int max(int a){
    return pow (a,4);

}
int main (){
  cout << max(10) << endl;
    return 0;
}

// 1. 1 tviv ev kstugi 7-i bazmapatik e te voch

#include <iostream>
#include <math.h>
using namespace std;
int max(int a){
    if ( a % 7 == 0)
    return true;
    else 
    return false;

}
int main (){
  cout << max(14) << endl;
    return 0;
// 1. 1 tviv ev kstugi 7-i bazmapatik e te voch

#include <iostream>
#include <math.h>
using namespace std;
char m(char a){
    if ('a')
    return 'A';
    else 
  return 'a';

}
int main (){
  cout << m('a') << endl;
    return 0;
}
