2. Գրել ծրագիր որը կհաշվի 1-ից մինչև n զույգ թվերի գումարը․
#include <iostream>
using namespace std;
int main(){

int n, sum = 0;
cin >> n;
for(int i = 1; i < n; i+=2){
 sum += i;
}
cout << sum;

return 0;
}

3. Գրել ծրագիր որը կհաշվի 1-ից մինչև n կենտ թվերի գումարը․

#include <iostream>
using namespace std;
int main(){

int n, sum = 0;
cin >> n;
for(int i = 1; i < n; i++){
    if (i % 2 == 1)
 sum += i;
}
cout << sum;

return 0;
}

4. Գրել ծրագիր որը կհաշվի 1-ից մինչև n այն թվերի գումարը, որնոնք 3-ի վրա 
բաժանելուց մնում է 1 մնացորդ․

#include <iostream>
using namespace std;
int main(){

int n, sum = 0;
cin >> n;
for(int i = 1; i < n; i++){
    if (i % 3 == 1)
 sum += i;
}
cout << sum;

return 0;
}

5. Գրել ծրագիր որը կհաշվի 1-ից մինչև n այն թվերի քանակը, որնոնք 7-ի 
բազմապատիկ են․

#include <iostream>
using namespace std;
int main(){

int n, sum = 0;
cin >> n;
for(int i = 1; i < n; i++){
    if (i % 7 == 0)
 sum++;
}
cout << sum;

return 0;
}

6. Գրել ծրագիր որը կհաշվի 1-ից մինչև n զույգ թվերի քանակը
#include <iostream>
using namespace std;
int main(){

int n, sum = 0;
cin >> n;
for(int i = 1; i < n; i+=2){
 sum++;
}
cout << sum;

return 0;
}

7. Գրել ծրագիր որը կբազմապատկի 1-ից մինչև n բոլոր կենտ թվերը իրար, և 
կարտածի․

#include <iostream>
using namespace std;
int main(){

int n, sum = 1;
cin >> n;
for(int i = 1; i < n; i++){
    if (i % 2 == 1)
 sum *= i;
 
}
cout << sum << endl;

return 0;
}

8. Գրել ծրագիր որը կտպի 1-ից n թվերը՝ հակառակ հերթականությամբ․

#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int i = n; i >= 1; i--){
 cout << i << endl;
}
