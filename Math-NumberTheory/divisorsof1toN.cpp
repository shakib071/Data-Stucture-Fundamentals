//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


vector<int> divisors[101];
void divisor(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j=j+i){
            divisors[j].push_back(i);
        }
    }
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
    divisor(100);

    for(auto i : divisors){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
     
    return 0;

}