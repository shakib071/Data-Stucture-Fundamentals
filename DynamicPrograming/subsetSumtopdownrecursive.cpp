#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//top down
//recurcive;

int dp[1001][1001];

bool subsetSum(int n,int a[],int s){
    if(n==0){
        if(s==0) return true;
        else return false;
    }
    if(dp[n][s]!=-1){
        return dp[n][s];
    }
    if(a[n-1]<=s){
    bool op1=subsetSum(n-1,a,s-a[n-1]);
    //nilam// nite sum er jonno s theke a[n-1] kom lagbe
    bool op2=subsetSum(n-1,a,s);
    //na nile ar minus korbo na
    return dp[n][s]= op1 || op2;
    }
    else {
      bool op2=subsetSum(n-1,a,s);
      //option ektai
      return dp[n][s]=op2;
    }
}



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            dp[i][j]=-1;
        }
     }
     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int s;//sum
     cin>>s;
     //khatay acea
   if(subsetSum(n,a,s)){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

     
    return 0;

}
//4
// 1 2 4 6
//10
//ans = "yes " because 4+6=10 banano jay