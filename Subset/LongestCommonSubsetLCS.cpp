#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int dp[1005][1005];

int lcs(string a,int n,string b,int m){

    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(a[n-1]==b[m-1]){
      int ans=lcs(a,n-1,b,m-1);
      return dp[n][m]= ans+1;
    }
    else{
        int ans1=lcs(a,n-1,b,m);
        int ans2=lcs(a,n,b,m-1);
        return dp[n][m]= max(ans1,ans2);
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     string a,b;
     cin>>a>>b;
     memset(dp,-1,sizeof(dp));
     cout<<lcs(a,a.size(),b,b.size());
    
     
    return 0;

}