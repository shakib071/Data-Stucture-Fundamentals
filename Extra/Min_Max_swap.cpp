#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
//2 tar besi valur modhhe
//getchar() diye amra kno charecter ignore korte pari jemon space 

int main(){
     
   int a,b,c,d;
   cin>>a>>b>>c>>d;

   int mn= min({a, b, c, d});
   int mx= max({a, b, c, d});
   swap(a,b);

    cout<<mn<<" "<<mx<<endl;
    cout<<a<<b<<endl;
     
    return 0;

}