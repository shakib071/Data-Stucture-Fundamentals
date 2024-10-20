#include<bits/stdc++.h>
using namespace std;
#define int long long 
//ei line diye shob int k long long int korlam jane 
//boro value er jonno overflow na hoy
//https://www.youtube.com/watch?v=nwUOmzFh78o
//ei video er problem

int power(int x,int y,int p){
    int res=1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
            y=y>>1;
            x=(x*x)%p;
            //binary exponetiation;
        }
    }
    return res;
}

int modInverse(int a,int p){
    return power(a,p-2,p);
    //fermats little theorum
}

int modfact(int n,int p){//p is greater than n and n er porer prime
//wilsons method//na bujle khata dekh
    if(p<=n){
        return 0;//karon n tahole p er multiple hbe ar mod 0 hbe 
    }
    int res=(p-1);
    for(int i=n+1;i<p;i++){
      res=(res* modInverse(i,p))%p;

    }

    return res;
}

int32_t main(){   //int dile long long main hoye jbe //error dekhabe
//unsigned //signed main etaoo use kora jay
     
     int n,p;
     cin>>n>>p;
     cout<<modfact(n,p)<<endl;
     
     
    return 0;

}