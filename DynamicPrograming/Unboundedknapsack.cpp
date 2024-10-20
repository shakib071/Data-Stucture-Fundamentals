#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int dp[1000][1000];

int unbounded_knapsack(int n,int w,int val[],int wei[]){
    if(n==0 || w==0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(wei[n-1]<=w){
    int op1=val[n-1]+unbounded_knapsack(n,w-wei[n-1],val,wei);
    //nilam ..nile tarpor abar ita nite pari abar naoo nite pari
    int op2=unbounded_knapsack(n-1,w,val,wei);
    //na nile ager value te jabo
    return dp[n][w]= max(op1,op2);
    }
    else{
         int op2=unbounded_knapsack(n-1,w,val,wei);
         return dp[n][w]= op2;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

 forn(1000){
    for(int j=0;j<1000;j++){
        dp[i][j]=-1;
    }
 }
     
     int n,w;//knapsack weight w
     cin>>n>>w;

     int val[n],weight[n];

     forn(n){
        cin>>val[i];
     }
     forn(n){
        cin>>weight[i];
     }

     int ans=unbounded_knapsack(n,w,val,weight);
     cout<<ans<<endl;
     
    return 0;

}