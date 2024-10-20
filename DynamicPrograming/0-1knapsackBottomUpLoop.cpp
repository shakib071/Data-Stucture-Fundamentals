#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//https://phitron.io/PH064/video/PH064-18-5-0-1-knapsack-bottom-up-approach
//complexity O(n*w)
//abar videooo dekh
int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
        int n;
     cin>>n;
     int weight[n],value[n];
     for(int i=0;i<n;i++){
        cin>>weight[i];
     }
      for(int i=0;i<n;i++){
        cin>>value[i];
     }

     int w;
     cin>>w;
     
     int dp[n+1][w+1];
     for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0)dp[i][j]=0;
        }
     }
  for(int i=1;i<=n;i++){//n
        for(int j=1;j<=w;j++){//w
           if(weight[i-1]<=j){
            int op1=dp[i-1][j-weight[i-1]]+value[i-1];
            int op2=dp[i-1][j];
            dp[i][j]=max(op1,op2);
           }

           else{
              int op2=dp[i-1][j];
              dp[i][j]=op2;
           }
        }
     }

     //ekhane shob value ei ber kortece

    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
           cout<<dp[i][j]<<" " ;
        }
        cout<<endl;
     }
    
    //last cell a answer thakbe
    //mane
   //  cout<<dp[n][w]<<endl;

    return 0;

}