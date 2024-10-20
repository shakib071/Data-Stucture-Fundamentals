#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2,MOD=1e9+7;


int power(int a,int n){
    a=a%MOD;//a jodi onel boro hoy
    int ans=1;
    while(n>0){
        if(n&1){//binary approch
        //onno arroch ayoo kora jay ..ekhane 1 bit thake kaj
         ans=(ans*a)%MOD;
        }
        a=(a*a)%MOD;
        n=n>>1;
    }
    return ans;
}
int powerRecusive(int a,int n){
    a=a%MOD;
    if(n==0)return 1;
  
  int p=(power(a,n/2)%MOD);
  if(n&1){
    return (((p*p)%MOD)*a)%MOD;
  }
  else return (p*p)%MOD;


}

int main(){
     
   int a,n;//for ex 56^12;

   cin>>a>>n;
     cout<<power(a,n)<<endl;
     
    return 0;

}