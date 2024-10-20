#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//shob recursion dp na
//eta shudhu recurtion
//recursion optimized korle ota dp

//jodi ekhane onek value er factorial lagto
//tahole amra ager value er fact er shathe mutiply korlei
//factorial petam,,bar bar eki value er recursion
//call korte hoto na
//ota dp hoto

//ekhane optizatione er scope nai

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     cout<<fact(n)<<endl;
     //loop diyeoo kora jabe
    return 0;

}