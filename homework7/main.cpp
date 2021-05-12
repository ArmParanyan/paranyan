// 1. Դրական թվերի քանակը
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            count++;
        }
        
    }
     cout << "qanak= " << count;
 }

 // 2. Բացասական թվերի գումարը
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            sum += arr[i];
        }
        
    }
     cout << "gumar= " << sum;
 }

 // 3. Դրական թվերի միջին թվաբանականը
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            sum += arr[i];
            count++;
        }
        
    }
     cout << "mijnTv= " << sum/count;
   return 0;
   
    // 4. Զույգ ինդեքս ունեցող թվերի գումարը
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i+=2){
            sum += arr[i];
        
    }
     cout << "gumar= " << sum;
   return 0;
 }
    // 5. Կենտ ինդեքս ունեցող թվերի արտադրյալը
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 1;
    
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if(i % 2 == 1){
            sum *= arr[i];
        }
        
    }
     cout << "artadryal= " << sum;
   return 0;
 }
   
    // 6. Բոլոր տարրերի բացարձակ արժեքների գումարը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    double sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
            sum += fabs(arr[i]);
        }
        
    
     cout << "gumar= " << sum;
     return 0;
 }
   
    // 7. Տրված k թվին բազմապատիկ ինդեքս ունեցող տարրերի քանակը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int count = 0,  k;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "k= ";
    cin >> k;
    for (int i = 0; i < n; i++){
        if( i % k == 0){
        count++;
        }
        }
        
    
     cout << "qanak= " << count;
     return 0;
 }
   
    //8. Դրական և բացասական տարրերի տարբերությունը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if( arr[i] != 0){
        sum -= arr[i];
        }
        }
        
    
     cout << "tarberutyun= " << sum;
     return 0;
 }
   
    //9. Տրված [ 4 , 21 ] միջակայքին պատկանող տարրերի քանակը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if( arr[i] >= 4 && arr[i] <= 21){
        count ++;
        }
        }
     
     cout << "qanak= " << count;
     return 0;
 }
   
    // 10. Տրված [ -7, 15 ) միջակայքին պատկանող տարրերի արտադրյալը


#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 1;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if( arr[i] >= -7 && arr[i] < 15){
        sum *= arr[i];
        }
        }
     
     cout << "artadryal= " << sum;
     return 0;
 }
   
     // 11. Տրված ( -45, 64 ) միջակայքին պատկանող տարրերի գումարը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if( arr[i] >= -45 && arr[i] < 64){
        sum += arr[i];
        }
        }
     
     cout << "gumar= " << sum;
     return 0;
 }
   
    // 12. Այն տարրերի քանակը որոնց արժեքի և ինդեքսի  տարբերությունը դրական թիվ է

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if( arr[i] - i > 0){
        sum ++;
        }
        }
     
     cout << "qanak= " << sum;
     return 0;
 }
   
    // 13. Այն տարրերի արտադրյալը որոնց ինդեքսը բաժանվում է տրված k թվին

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 1, k;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   cout << "k=";
   cin >> k;
   
    for (int i = 0; i < n; i++){
        if( i % k == 0){
        sum *= arr[i];
        }
        }
     
     cout << "artadryal= " << sum;
     return 0;
 }
   
    // 14. Զույգ արժեք ունեցող տարրերի քառակուսիների գումարը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
        sum += pow(arr[i],2);
        }
        }
     
     cout << "gumar= " << sum;
     return 0;
 }
   
    // 15. Զույգ արժեք ունեցող տարրերի քանակը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
        count ++;
        }
        }
     
     cout << "qanak= " << count;
     return 0;
 }
   
    // 16. Կենտ արժեք ունեցող տարրերի միջին թվաբանականը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] % 2 != 0){
            sum += arr[i];
              count ++;
        }
        }
     
     cout << "mijinTv= " << sum/count;
     return 0;
 }
   
    // 17. Կենտ արժեք ունեցող տարրերի գումարը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] % 2 != 0){
            sum += arr[i];
        
        }
        }
     
     cout << "gumar= " << sum;
        return 0;
 }
   
    // 18. 0 արժեք ունեցող տարրերի քանակը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] == 0){
            count ++;
        
        }
        }
     
     cout << "qanak= " << count;
        return 0;
 }
   
    // 19. 3-ին բազմապատիկ տարրերի միջին թվաբանականը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if( arr[i] % 3 == 0){
            sum += arr[i];
            count ++;
        }
        }
     
     cout << "mijinTv= " << sum / count;
        return 0;
 }
   
    // 20. 7-ին բազմապատիկ տարրերի քանակը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  count = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
 

    for (int i = 0; i < n; i++){
        if(arr[i] % 7 == 0){
            count ++;
        }
        }
     
     cout << "qanak= " << count;
        return 0;
 }
   
    // 21. Տրված k թվին բազմապատիկ տարրերի գումարը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  sum = 0, k;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "k= ";
    cin >> k;
 
    for (int i = 0; i < n; i++){
        if(arr[i] % k == 0){
            sum += arr[i];
        }
        }
     
     cout << "gumar= " << sum;
        return 0;
 }
   
    // 22. Տրված k թվին բազմապատիկ տարրերի արտադրյալը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  sum = 1, k;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "k= ";
    cin >> k;
 
    for (int i = 0; i < n; i++){
        if(arr[i] % k == 0){
            sum *= arr[i];
        }
        }
     
     cout << "artadryal= " << sum;
        return 0;
 }
   
    // 23. Այն տարրերի քառակուսիների գումարը, որոնց արժեքների և ինդեքսների 
//գումարը առանց մնացորդի բաժանվում է 3-ի։


#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  sum = 0;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   
    for (int i = 0; i < n; i++){
        if((arr[i] + i) % 3 == 0){
            sum += pow(arr[i],2);
        }
        }
     
     cout << "gumar= " << sum;
        return 0;
 }
   
    // 24. Մեծագույն տարրը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  max;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   max = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
           max = arr[i];
        }
        }
     
     cout << "max= " << max;
        return 0;
 }
    // 25. Փոքրագույն տարրը

#include <iostream>
#include <math.h>
 using namespace std;
 int main(){
    int n = 7;
    int arr[n]; 
    int  min;

    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
   min = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] < min){
           min = arr[i];
        }
        }
     
     cout << "min= " << min;
        return 0;
 }
   
  
   
   
