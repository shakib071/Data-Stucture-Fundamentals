#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    
     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int s;//sum
     cin>>s;
     int dp[n+1][s+1];
     dp[0][0]=1;
     for(int i=1;i<=s;i++){
        dp[0][i]=0;
     }
     for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(a[i-1]<=j){
            int op1=dp[i-1][j-a[i-1]];
            int op2=dp[i-1][j];
            dp[i][j]= op1 + op2;
            }
            else {
                dp[i][j]=dp[i-1][j];
        }
        }
     }
cout<<dp[n][s]<<endl;

    return 0;

}