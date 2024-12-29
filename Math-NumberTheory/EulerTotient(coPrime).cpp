//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int phi[1000006],mark[1000006];

void seivephi(int n){
    int i,j;
    for(i=1;i<=n;i++) phi[i]=i;

    phi[1]=1;
    mark[1]=1;

    for(i=2;i<=n;i++){
        if(!mark[i]){
            for(j=i;j<=n;j+=i){
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     
    return 0;

}